using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AddScore : MonoBehaviour
{
    private bool PastPlayer = false;
    // Update is called once per frame
    void Update()
    {
        if (!PastPlayer && transform.position.x < -0.5f)
        {
            ScoreManager.AddScore();
            PastPlayer = true;
        }
            
    }
}
