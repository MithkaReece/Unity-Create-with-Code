using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EatFoodCollision : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        Destroy(other.gameObject);
        Destroy(gameObject);
        EventManager.TriggerAddScore(1);
    }
}
