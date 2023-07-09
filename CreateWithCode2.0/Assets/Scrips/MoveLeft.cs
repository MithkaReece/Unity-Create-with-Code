using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveLeft : MonoBehaviour
{
    private bool gameOver = false;
    

    // Start is called before the first frame update
    void Start()
    {
        EventManager.GameOver += StopMoving;
        
    }

    // Update is called once per frame
    void Update()
    {
        if (gameOver)
            return;
        float speed = SpeedManager.GetSpeed();
        transform.Translate(speed * Time.deltaTime * Vector3.left);
    }

    void StopMoving()
    {
        gameOver = true;
    }
}
