using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject enemyPrefab;
    public GameObject powerUpPrefab;
    public GameObject player;


    private float spawnRange = 9;

    private int waveNumber = 1;

    private int aliveEnemies = 0;
    // Start is called before the first frame update
    void Start()
    {
        SpawnWave(waveNumber);
    }

    // Update is called once per frame
    void Update()
    {
        if(aliveEnemies <= 0)
        {
            waveNumber++;
            SpawnWave(waveNumber);
        }
    }

    public void EnemyDied()
    {
        aliveEnemies--;
    }


    void SpawnWave(int spawnNumber)
    {
        Instantiate(powerUpPrefab, new Vector3(Random.Range(-spawnRange, spawnRange), powerUpPrefab.transform.position.y, Random.Range(-spawnRange, spawnRange)), powerUpPrefab.transform.rotation);
        aliveEnemies += spawnNumber;
        for (int i = 0; i < spawnNumber; i++)
        {
            GameObject enemyObj = Instantiate(enemyPrefab, new Vector3(Random.Range(-spawnRange, spawnRange), 0, Random.Range(-spawnRange, spawnRange)), enemyPrefab.transform.rotation);
            Enemy enemy = enemyObj.GetComponent<Enemy>();
            enemy.Player = player;
            enemy.Spawner = this;
        }
    }
}
