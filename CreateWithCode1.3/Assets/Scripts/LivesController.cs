using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LivesController : MonoBehaviour
{
    public ScoreController scoreController;
    private float lives = 3;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Lives:" + lives.ToString());
    }

    private void OnEnable()
    {
        EventManager.RemoveLife += HandleRemoveLife;
    }

    private void OnDisable()
    {
        EventManager.RemoveLife -= HandleRemoveLife;
    }


    void HandleRemoveLife() {
        lives -= 1;
        Debug.Log("Lives:" + lives.ToString());
        if(lives <= 0) {
            Debug.Log("Game Over");
            scoreController.PrintScore();
        }
    }
}
