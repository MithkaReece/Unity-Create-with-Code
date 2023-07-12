using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Homing : MonoBehaviour
{
    public float speed;
    Rigidbody rb;

    float constantY;

    public float rocketImpactForce;
    public float turnSpeed = 10f;

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        constantY = transform.position.y;
    }

    // Update is called once per frame
    void Update()
    {
        List<GameObject> enemies = SpawnManager.ActiveEnemies;
        if (enemies == null)
            return;

        if (enemies.Count <= 0)
            return;

        GameObject closestEnemy = null;
        float closestDistance = Mathf.Infinity;
        Vector3 enemyDirection = Vector3.zero;

        foreach(GameObject enemy in enemies)
        {
            enemyDirection = enemy.transform.position - transform.position;
            if(enemyDirection.sqrMagnitude < closestDistance)
            {
                closestEnemy = enemy;
                closestDistance = enemyDirection.sqrMagnitude;
            }
        }

        if (closestEnemy == null)
            return;
        
        // Desired rotation towards the enemy
        Quaternion desiredRotation = Quaternion.LookRotation(enemyDirection);

        // Extract the Y-axis rotation from the desired rotation and combine it with frozen X and Z rotations
        Quaternion targetRotation = Quaternion.Euler(transform.rotation.eulerAngles.x, desiredRotation.eulerAngles.y, transform.rotation.eulerAngles.z);

        // Gradually rotate the rocket towards the target rotation
        Quaternion newRotation = Quaternion.RotateTowards(transform.rotation, targetRotation, turnSpeed * Time.deltaTime);
        rb.MoveRotation(newRotation);

        // Rocket thrusting forward
        rb.velocity = transform.forward * speed;

        transform.position = new Vector3(transform.position.x, constantY, transform.position.z);
    }


    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Enemy"))
        {
            // Apply impulse force to the enemy
            Rigidbody enemyRigidbody = collision.gameObject.GetComponent<Rigidbody>();
            if (enemyRigidbody == null)
                return;
            Vector3 direction = collision.contacts[0].point - transform.position;
            direction.Normalize();
            enemyRigidbody.AddForce(direction * rocketImpactForce, ForceMode.Impulse);
            Destroy(gameObject);
        }
    }

}
