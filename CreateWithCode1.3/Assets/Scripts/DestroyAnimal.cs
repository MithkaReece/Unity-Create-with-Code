using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DestroyAnimal : MonoBehaviour
{
    private float distance = 2f;

    // Update is called once per frame
    void Update()
    {
        if (transform.position.z < -distance)
        {
            Destroy(gameObject);
            Debug.Log("Game Over");
        }
    }
}
