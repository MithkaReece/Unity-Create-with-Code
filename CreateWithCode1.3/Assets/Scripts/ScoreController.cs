using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SocialPlatforms.Impl;

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

    private void OnGUI()
    {
        // Calculate the position for the score display
        Vector2 scorePosition = new Vector2(10f, 10f);

        // Display the score
        GUI.Label(new Rect(scorePosition.x, scorePosition.y, 100f, 30f), "Score: " + Score);
    }


    private void HandleAddScore(int value) {
        Score += value;
        Debug.Log("Score:" + Score.ToString());
    }

}
