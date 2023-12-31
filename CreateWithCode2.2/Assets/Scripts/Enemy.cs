using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public float Speed { private get; set; }
    public GameObject Player;

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
        rb.AddForce(Time.deltaTime * Speed * playerDirection);

        if (transform.position.y < -10 || transform.position.sqrMagnitude > 1000f)
        {
            SpawnManager.EnemyDied(gameObject);
            Destroy(gameObject);
        }
    }


}
