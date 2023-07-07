using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EatFoodCollision : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Food"))
        {
            Destroy(other.gameObject);
            Destroy(gameObject);
            EventManager.TriggerAddScore(1);
        }else if (other.gameObject.CompareTag("Player")) {
            EventManager.TriggerRemoveLife();
        }
    }
}
