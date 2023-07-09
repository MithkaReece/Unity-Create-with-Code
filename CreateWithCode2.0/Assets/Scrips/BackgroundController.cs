using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BackgroundController : MonoBehaviour
{
    private float Speed = 15f;
    private Vector3 startPos;
    public float repeatLength = 56.4f;
    private bool gameOver = false;

    // Start is called before the first frame update
    void Start()
    {
        EventManager.GameOver += StopMoving;
        startPos = transform.position;
    }

    // Update is called once per frame
    void Update()
    {
        if (gameOver)
            return;

        transform.Translate(Speed * Time.deltaTime * Vector3.left);

        if(transform.position.x < startPos.x - repeatLength)
        {
            transform.position = startPos;
        }

    }

    void StopMoving()
    {
        gameOver = true;
    }
}
