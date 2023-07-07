using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreController : MonoBehaviour
{
    float Score = 0;

    private void OnEnable()
    {
        EventManager.AddScore += HandleAddScore;
    }

    private void OnDisable()
    {
        EventManager.AddScore -= HandleAddScore;
    }


    private void HandleAddScore(int value) {
        Score += value;
        Debug.Log("Score:" + Score.ToString());
    }

    public void PrintScore() {
        Debug.Log("Your Score was " + Score.ToString());
    }
}
