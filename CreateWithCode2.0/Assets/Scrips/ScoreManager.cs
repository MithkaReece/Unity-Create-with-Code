using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreManager 
{
    private static float score;

    public static void AddScore()
    {
        score += SpeedManager.GetSpeed();
        Debug.Log("SCORE: " + ((int)score).ToString());
    }
}
