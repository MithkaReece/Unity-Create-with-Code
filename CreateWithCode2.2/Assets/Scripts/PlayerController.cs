using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public LayerMask enemyLayer;
    public GameObject FocalPoint;
    public GameObject BuffIndicator;
    public GameObject SmashIndicator;
    public GameObject RocketPrefab;
    public float speed;

    private Rigidbody rb;


    bool hasBuff;
    float buffStrength = 15.0f;


    bool hasSmash = true;
    bool smashHitGround = true;



    Coroutine activeBuffCooldown;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        float forwardInput = Input.GetAxis("Vertical");
        rb.AddForce(forwardInput * speed * Time.deltaTime * FocalPoint.transform.forward);

        if (hasSmash && Input.GetKey(KeyCode.Space))
        {
            hasSmash = false;
            StartCoroutine(Smash());
            smashHitGround = false;
        }

        if(transform.position.y < -1f)
        {
            transform.position = FocalPoint.transform.position;
            SpawnManager.Reset();
        }
    }


    IEnumerator Smash()
    {
        Physics.IgnoreLayerCollision(gameObject.layer, LayerMask.NameToLayer("Enemy"), true);
        rb.AddForce(Vector3.up * 30f, ForceMode.Impulse);

        yield return new WaitForSeconds(0.2f);

        rb.AddForce(Vector3.up * -70f, ForceMode.Impulse);
    }
    
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("BuffPowerUp"))
        {
            hasBuff = true;
            Destroy(other.gameObject);
            BuffIndicator.SetActive(true);
            if (activeBuffCooldown != null)
                StopCoroutine(activeBuffCooldown);
            activeBuffCooldown = StartCoroutine(BuffCountdownRoutine());
        }
        else if (other.CompareTag("RocketPowerUp"))
        {
            Destroy(other.gameObject);
            Instantiate(RocketPrefab, transform.position + 2f * Vector3.forward, RocketPrefab.transform.rotation);
        }
        else if (other.CompareTag("SmashPowerUp"))
        {
            hasSmash = true;
            Destroy(other.gameObject);
            SmashIndicator.SetActive(true);
        }

        
    }
    
    private void OnCollisionEnter(Collision collision)
    {
        if (hasBuff && collision.gameObject.CompareTag("Enemy"))
        {
            Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            Vector3 directionToEnemy = collision.gameObject.transform.position - transform.position;

            enemyRb.AddForce(directionToEnemy * buffStrength, ForceMode.Impulse);
        }
        else if (!smashHitGround && collision.gameObject.CompareTag("Ground"))
        {
            // Perform the smash effect on nearby enemies
            Collider[] colliders = Physics.OverlapSphere(transform.position, 5, enemyLayer);
            foreach (Collider collider in colliders)
            {
                // Check if the collider has a Rigidbody component
                Rigidbody enemyRigidbody = collider.GetComponent<Rigidbody>();
                if (enemyRigidbody != null)
                {
                    // Apply a downward force to push the enemy away
                    Vector3 smashDirection = collider.transform.position - transform.position;
                    smashDirection.Normalize();
                    enemyRigidbody.AddForce(smashDirection * 100f, ForceMode.Impulse);
                }
            }
            smashHitGround = true;
            SmashIndicator.SetActive(false);
            Physics.IgnoreLayerCollision(gameObject.layer, LayerMask.NameToLayer("Enemy"), false);
        }
    }

    float buffCooldown = 7f;
    IEnumerator BuffCountdownRoutine()
    {
        yield return new WaitForSeconds(buffCooldown);
        hasBuff = false;
        BuffIndicator.SetActive(false);
    }
}
