using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SmashIndicatorMovement : MonoBehaviour
{
    public GameObject Player;
    // Update is called once per frame
    void Update()
    {
        transform.position = Player.transform.position + new Vector3(0, -0.45f, 0);
    }
}
