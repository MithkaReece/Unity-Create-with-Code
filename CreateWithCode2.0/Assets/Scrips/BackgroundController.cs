using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundController : MonoBehaviour
{
    public float Speed;
    private Vector3 startPos;
    public float repeatLength = 56.4f;

    // Start is called before the first frame update
    void Start()
    {
        startPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Speed * Time.deltaTime * Vector3.left);

        if(transform.position.x < startPos.x - repeatLength)
        {
            transform.position = startPos;
        }
    }
}
