using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BuffIndicatorMovement : MonoBehaviour
{
    public GameObject Player;
    float rotationSpeed = 100f;
    // Update is called once per frame
    void Update()
    {
        transform.position = Player.transform.position;
        transform.Rotate(Vector3.up, Time.deltaTime * rotationSpeed);
    }
}
