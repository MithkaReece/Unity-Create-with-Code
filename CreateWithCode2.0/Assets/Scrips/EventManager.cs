using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EventManager
{
    public delegate void GameOverDelegate();
    public static event GameOverDelegate GameOver;

    public static void TriggerGameOver()
    {
        GameOver.Invoke();
    }

}
