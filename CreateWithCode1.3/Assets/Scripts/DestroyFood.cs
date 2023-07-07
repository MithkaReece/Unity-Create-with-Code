using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyFood : MonoBehaviour
{
    private float maxX = 25;
    private float minX = -25;
    private float maxZ = 35;
    private float minZ = -25;

    // Update is called once per frame
    void Update()
    {
        float currentX = transform.position.x;
        float currentZ = transform.position.z;
        if (currentX > maxX || currentX < minX || currentZ > maxZ || currentZ < minZ)
            Destroy(gameObject);
    }
}