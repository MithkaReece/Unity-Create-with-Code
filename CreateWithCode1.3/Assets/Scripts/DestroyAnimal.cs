using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyAnimal : MonoBehaviour
{
    private float minZ = 2f;
    private float minX = -30f;
    private float maxX = 30f;

    // Update is called once per frame
    void Update()
    {
        if (transform.position.z < -minZ || transform.position.x > maxX ||
            transform.position.x < minX)
        {
            Destroy(gameObject);
        }
    }
}
