using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalSpawner : MonoBehaviour
{

    public GameObject[] AnimalPrefabs;

    public float minX;
    public float maxX;


    private float startTime = 2f;
    private float spawnInterval = 1.5f;
    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating(nameof(SpawnRandomAnimal), startTime, spawnInterval);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void SpawnRandomAnimal() {
        int randomAnimalIndex = Random.Range(0, AnimalPrefabs.Length);
        GameObject randomAnimal = AnimalPrefabs[randomAnimalIndex];
        SpawnAnimal(randomAnimal);
    }

    void SpawnAnimal(GameObject animal) {
        float RandomX = Random.Range(minX, maxX);
        Instantiate(animal, transform.position + new Vector3(RandomX, 0, 0), transform.rotation);
    }
}
