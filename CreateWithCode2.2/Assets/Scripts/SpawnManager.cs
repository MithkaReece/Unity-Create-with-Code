using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    public GameObject EnemyPrefab;
    public GameObject EnemyStrongPrefab;
    public GameObject BossPrefab;

    public GameObject BuffPowerUpPrefab;
    public GameObject RocketPowerUpPrefab;
    public GameObject SmashPowerUpPrefab;
    public GameObject player;


    public static float spawnRange = 9;

    int waveNumber = 1;

    static SpawnManager instance;

    public static List<GameObject> ActiveEnemies { get; private set; }
    // Start is called before the first frame update
    void Start()
    {
        instance = this;
        ActiveEnemies = new List<GameObject>();
        SpawnWave();
    }

    // Update is called once per frame
    void Update()
    {
        if(ActiveEnemies.Count <= 0)
        {
            waveNumber++;
            SpawnWave();
        }
        
    }

    public static void EnemyDied(GameObject enemy)
    {
        ActiveEnemies.Remove(enemy);
    }


    float strongEnemyChance = 25f;

    float missileChance = 25f;
    float smashChance = 30f;
    void SpawnWave()
    {
        //Spawn powerups
        SpawnRandomPrefab(BuffPowerUpPrefab);
        if (Random.Range(0, 100f) < missileChance)
            SpawnRandomPrefab(RocketPowerUpPrefab);
        if (Random.Range(0, 100f) < smashChance)
            SpawnRandomPrefab(SmashPowerUpPrefab);

        //Spawn enemies
        if (waveNumber % 5 == 0)
        {
            BossSpawning boss = CreateEnemy(BossPrefab, 1000f).GetComponent<BossSpawning>();
            boss.spawningInterval = 25f / waveNumber;
        }
        else
            for (int i = 0; i < waveNumber; i++)
            {
                if (Random.Range(0, 100f) < strongEnemyChance)
                    SpawnStrongEnemy();
                else
                    SpawnNormalEnemy();
            }
    }

    public static void SpawnNormalEnemy()
    {
        instance.CreateEnemy(instance.EnemyStrongPrefab, 500f);
    }

    public static void SpawnStrongEnemy()
    {
        instance.CreateEnemy(instance.EnemyPrefab, 300f);
    }


    GameObject CreateEnemy(GameObject prefab, float speed)
    {
        GameObject enemyObj = SpawnRandomPrefab(prefab);
        Enemy enemy = enemyObj.GetComponent<Enemy>();
        enemy.Speed = speed;
        enemy.Player = player;
        ActiveEnemies.Add(enemyObj);
        return enemyObj;
    }

    GameObject SpawnRandomPrefab(GameObject prefab)
    {
        return Instantiate(prefab,
                    new Vector3(Random.Range(-spawnRange, spawnRange),
                    prefab.transform.position.y,
                    Random.Range(-spawnRange, spawnRange)),
                    prefab.transform.rotation);
    }


    private static string[] tagsToReset = new string[] { "RocketPowerUp", "SmashPowerUp", "BuffPowerUp", "Rocket" }; 
    public static void Reset()
    {
        instance.waveNumber = 0;
        foreach(GameObject enemy in ActiveEnemies)
        {
            Destroy(enemy);
        }
        ActiveEnemies.Clear();

        // Iterate over all GameObjects in the scene
        foreach (GameObject obj in FindObjectsOfType<GameObject>())
        {
            if (System.Array.IndexOf(tagsToReset, obj.tag) != -1)
                Destroy(obj);
        }
    }
}
