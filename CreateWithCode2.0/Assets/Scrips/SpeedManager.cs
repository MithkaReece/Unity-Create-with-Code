using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpeedManager : MonoBehaviour
{
    public AnimationCurve speedCurve;
    private static float startTime;

    public static void Initialize()
    {
        startTime = Time.time; // Set the start time to the current time
    }
    public static float GetSpeed()
    {
        float elapsedTime = Time.time - startTime; 
        return instance.speedCurve.Evaluate(elapsedTime); 
    }

    private static SpeedManager instance;

    private void Awake()
    {
        instance = this;
    }
}
