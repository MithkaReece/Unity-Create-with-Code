using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject EnemyPrefab;
    public GameObject EnemyStrongPrefab;
    public GameObject PowerUpPrefab;
    public GameObject RocketPowerUpPrefab;
    public GameObject player;


    float spawnRange = 9;

    int waveNumber = 1;


    public static List<GameObject> ActiveEnemies { get; private set; }
    // Start is called before the first frame update
    void Start()
    {
        ActiveEnemies = new List<GameObject>();
        SpawnWave(waveNumber);
    }

    // Update is called once per frame
    void Update()
    {
        if(ActiveEnemies.Count <= 0)
        {
            waveNumber++;
            SpawnWave(waveNumber);
        }
        
    }

    public void EnemyDied(GameObject enemy)
    {
        ActiveEnemies.Remove(enemy);
    }


    float strongEnemyChance = 25f;
    float missileChance = 25;
    void SpawnWave(int spawnNumber)
    {
        //Spawn powerups
        Instantiate(PowerUpPrefab, new Vector3(Random.Range(-spawnRange, spawnRange), PowerUpPrefab.transform.position.y, Random.Range(-spawnRange, spawnRange)), PowerUpPrefab.transform.rotation);
        if(Random.Range(0, 100f) < missileChance)
        {
            Instantiate(RocketPowerUpPrefab, new Vector3(Random.Range(-spawnRange, spawnRange), PowerUpPrefab.transform.position.y, Random.Range(-spawnRange, spawnRange)), PowerUpPrefab.transform.rotation);
        }

        //Spawn enemies
        for (int i = 0; i < spawnNumber; i++)
        {
            GameObject enemyObj;
            Enemy enemy;
            if (Random.Range(0, 100f) < strongEnemyChance)
            {
                enemyObj = Instantiate(EnemyStrongPrefab, new Vector3(Random.Range(-spawnRange, spawnRange), 0, Random.Range(-spawnRange, spawnRange)), EnemyPrefab.transform.rotation);
                enemy = enemyObj.GetComponent<Enemy>();
                enemy.Speed = 500f;
            }
            else
            {
                enemyObj = Instantiate(EnemyPrefab, new Vector3(Random.Range(-spawnRange, spawnRange), 0, Random.Range(-spawnRange, spawnRange)), EnemyPrefab.transform.rotation);
                enemy = enemyObj.GetComponent<Enemy>();
                enemy.Speed = 300f;
            }

            enemy.Player = player;
            enemy.Spawner = this;

            ActiveEnemies.Add(enemyObj);
        }
    }
}
