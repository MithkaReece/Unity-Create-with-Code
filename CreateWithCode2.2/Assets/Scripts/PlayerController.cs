using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    
    public GameObject FocalPoint;
    public GameObject PowerUpIndicator;
    public GameObject RocketPrefab;
    public float speed;

    private Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    float indicatorSpeed = 100f;
    // Update is called once per frame
    void Update()
    {
        PowerUpIndicator.transform.position = transform.position + new Vector3(0,0,0);
        PowerUpIndicator.transform.Rotate(Vector3.up, Time.deltaTime * indicatorSpeed);

        float forwardInput = Input.GetAxis("Vertical");
        rb.AddForce(Time.deltaTime * FocalPoint.transform.forward * speed * forwardInput);
    }

    private bool hasPowerUp;
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("PowerUp"))
        {
            hasPowerUp = true;
            Destroy(other.gameObject);
            PowerUpIndicator.SetActive(true);
            StartCoroutine(PowerUpCountdownRoutine());
        }
        else if (other.CompareTag("RocketPowerUp"))
        {
            Destroy(other.gameObject);
            Instantiate(RocketPrefab, transform.position + 2f * Vector3.forward, RocketPrefab.transform.rotation);
        }

        
    }

    float powerUpStrength = 15.0f;

    private void OnCollisionEnter(Collision collision)
    {
        if (hasPowerUp && collision.gameObject.CompareTag("Enemy"))
        {
            Rigidbody enemyRb = collision.gameObject.GetComponent<Rigidbody>();
            Vector3 directionToEnemy = collision.gameObject.transform.position - transform.position;

            enemyRb.AddForce(directionToEnemy * powerUpStrength, ForceMode.Impulse);
        }
    }

    float powerUpCooldown = 7f;
    IEnumerator PowerUpCountdownRoutine()
    {
        yield return new WaitForSeconds(powerUpCooldown);
        hasPowerUp = false;
        PowerUpIndicator.SetActive(false);
    }
}
