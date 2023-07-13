using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Target : MonoBehaviour
{
    public int pointValue;
    Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        rb.AddForce(Vector3.up * Random.Range(12, 16), ForceMode.Impulse);
        rb.AddTorque(new Vector3(Random.Range(-10, 10), Random.Range(-10, 10), Random.Range(-10,10)), ForceMode.Impulse);
        transform.position = new Vector3(Random.Range(-4, 4), -1, 0);
    }

    // Update is called once per frame
    void Update()
    {
    }

    public ParticleSystem explosionParticle;

    private void OnMouseDown()
    {
        Destroy(gameObject);
        Instantiate(explosionParticle, transform.position, explosionParticle.transform.rotation);
        if (pointValue < 0)
        {
            GameManager.GameOver();
        }
        else
        {
            GameManager.AddScore(pointValue);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Destroy(gameObject);
        if (!gameObject.CompareTag("Bad"))
            GameManager.GameOver();
    }
}
