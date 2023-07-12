using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossSpawning : MonoBehaviour
{
    public float spawningInterval { private get; set; }
    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating(nameof(SpawnRandomEnemy), 0f, spawningInterval);   
    }

    void SpawnRandomEnemy()
    {
        if (Random.Range(0, 100) < 50)
            SpawnManager.SpawnNormalEnemy();
        else
            SpawnManager.SpawnStrongEnemy();
        
    }
}
