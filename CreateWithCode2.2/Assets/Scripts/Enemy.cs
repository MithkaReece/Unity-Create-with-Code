using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float speed;
    public GameObject Player { private get; set; }
    public SpawnManager Spawner { private get; set; }

    Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        
    }

    // Update is called once per frame
    void Update()
    {
        Vector3 playerDirection = (Player.transform.position - transform.position).normalized;
        rb.AddForce(Time.deltaTime * speed * playerDirection);

        if (transform.position.y < -10)
        {
            Spawner.EnemyDied();
            Destroy(gameObject);
        }
    }


}
