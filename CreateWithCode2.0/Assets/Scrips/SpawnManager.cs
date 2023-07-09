using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject[] ObstaclePrefabs;
    public float intervalMin;
    public float intervalMax;
    // Start is called before the first frame update
    void Start()
    {
        EventManager.GameOver += StopSpawning;
        InvokeRepeating(nameof(SpawnRandomObstacle), 0f, Random.Range(intervalMin, intervalMax));
    }

    void SpawnRandomObstacle()
    {
        int randomObstacleIndex = Random.Range(0, ObstaclePrefabs.Length);
        GameObject randomObstacle = ObstaclePrefabs[randomObstacleIndex];
        Instantiate(randomObstacle, transform.position, transform.rotation);
    }

    void StopSpawning()
    {
        CancelInvoke(nameof(SpawnRandomObstacle));
    }
}
