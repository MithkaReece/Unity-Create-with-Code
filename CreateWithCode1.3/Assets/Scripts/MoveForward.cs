using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveForward : MonoBehaviour
{
    public float speed = 20f;

    // Update is called once per frame
    void Update()
    {
        transform.Translate(speed * Time.deltaTime * Vector3.forward);
    }
}
