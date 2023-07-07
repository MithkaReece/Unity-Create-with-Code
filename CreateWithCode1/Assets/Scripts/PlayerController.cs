using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public Camera BehindCamera;
    public Camera FrontCamera;
    public string inputID;


    public  float acceleration = 5;
    public  float forwardMaxSpeed = 20f;
    public  float reverseMaxSpeed = 5f;

    public  float turnSpeed = 100f;




    private Rigidbody rb;
    void Start()
    {
        rb = GetComponent<Rigidbody>();
    }

    private float horizontalInput;
    private float forwardInput;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButtonDown("Switch-Camera" + inputID))
        {
            BehindCamera.enabled = !BehindCamera.enabled;
            FrontCamera.enabled = !FrontCamera.enabled;
        }

        horizontalInput = Input.GetAxis("Horizontal" + inputID);
        transform.Rotate(Vector3.up, Time.deltaTime * turnSpeed * horizontalInput);
        

        forwardInput = Input.GetAxis("Vertical" + inputID);
        float currentSpeed = rb.velocity.magnitude;
        Debug.Log(currentSpeed);
        float directionalMaxSpeed = forwardInput > 0 ? forwardMaxSpeed : reverseMaxSpeed;
        float targetSpeed = Mathf.Clamp(currentSpeed + (forwardInput * acceleration) , 0f, directionalMaxSpeed);
        rb.AddForce(transform.forward * targetSpeed, ForceMode.Acceleration);
        rb.velocity = Vector3.ClampMagnitude(rb.velocity, directionalMaxSpeed);

    }
}