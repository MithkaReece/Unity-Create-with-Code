using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventManager : MonoBehaviour
{
    public delegate void AddScoreDelegate(int value);
    public static event AddScoreDelegate AddScore;

    public static void TriggerAddScore(int value)
    {
        AddScore?.Invoke(value);
    }

    public delegate void RemoveLifeDelegat();
    public static event RemoveLifeDelegat RemoveLife;

    public static void TriggerRemoveLife()
    {
        RemoveLife?.Invoke();
    }
}
