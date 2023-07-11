using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    
    public GameObject focalPoint;
    public GameObject powerUpIndicator;
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
        powerUpIndicator.transform.position = transform.position + new Vector3(0,0,0);
        powerUpIndicator.transform.Rotate(Vector3.up, Time.deltaTime * indicatorSpeed);

        float forwardInput = Input.GetAxis("Vertical");
        rb.AddForce(Time.deltaTime * focalPoint.transform.forward * speed * forwardInput);
    }

    private bool hasPowerUp;
    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("PowerUp"))
        {
            hasPowerUp = true;
            Destroy(other.gameObject);
            powerUpIndicator.SetActive(true);
            StartCoroutine(PowerUpCountdownRoutine());
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
        powerUpIndicator.SetActive(false);
    }
}
