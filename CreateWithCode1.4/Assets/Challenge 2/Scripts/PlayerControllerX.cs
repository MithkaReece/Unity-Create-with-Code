using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerX : MonoBehaviour
{
    public GameObject dogPrefab;

    private float FireCooldown = 0.4f;
    private System.DateTime LastDogFire;

    // Update is called once per frame
    void Update()
    {
        // On spacebar press, send dog
        if (Input.GetKeyDown(KeyCode.Space))
        {
            if (LastDogFire.AddSeconds(FireCooldown) < System.DateTime.Now)
            {
                Instantiate(dogPrefab, transform.position, dogPrefab.transform.rotation);
                LastDogFire = System.DateTime.Now;
            }
        }
    }
}
