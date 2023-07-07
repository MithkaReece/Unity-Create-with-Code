using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BusController : MonoBehaviour
{

    public float maxSpeed;
    public float accleration;


    private Rigidbody rb;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        float currentSpeed = rb.velocity.magnitude;

        if(currentSpeed < maxSpeed) {
            rb.AddForce(accleration * Time.deltaTime * transform.forward, ForceMode.Acceleration);
        }

    }
}
