﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyX : MonoBehaviour
{
    public float speed { private get; set; }
    private Rigidbody enemyRb;
    public GameObject playerGoal { private get; set; }

    public SpawnManagerX Spawner { private get; set; }

    // Start is called before the first frame update
    void Start()
    {
        enemyRb = GetComponent<Rigidbody>();
    }

    // Update is called once per frame
    void Update()
    {
        // Set enemy direction towards player goal and move there
        Vector3 lookDirection = (playerGoal.transform.position - transform.position).normalized;
        enemyRb.AddForce(lookDirection * speed * Time.deltaTime);

    }

    private void OnCollisionEnter(Collision other)
    {
        // If enemy collides with either goal, destroy it
        if (other.gameObject.name == "Enemy Goal")
        {
            Spawner.EnemyDestroyed();
            Destroy(gameObject);
        } 
        else if (other.gameObject.name == "Player Goal")
        {
            Spawner.EnemyDestroyed();
            Destroy(gameObject);
        }

    }

}