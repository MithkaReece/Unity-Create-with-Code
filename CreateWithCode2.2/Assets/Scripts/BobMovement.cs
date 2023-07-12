using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BobMovement : MonoBehaviour
{
    Vector3 startPosition;
    float seedOffset;
    // Start is called before the first frame update
    void Start()
    {
        startPosition = transform.position;
        seedOffset = Random.Range(0, 10000);
    }

    float speed = 3f;
    float height = 0.15f;
    // Update is called once per frame
    void Update()
    {
        // Calculate the vertical offset using a sine wave based on time
        float yOffset = Mathf.Sin(Time.time * speed + seedOffset) * height;

        // Update the position of the object with the vertical offset
        transform.position = startPosition + new Vector3(0f, yOffset, 0f);
    }
}
