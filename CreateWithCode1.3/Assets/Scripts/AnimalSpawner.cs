using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AnimalSpawner : MonoBehaviour
{

    public GameObject[] AnimalPrefabs;

    public float Left;
    public float Right;


    private float startTime = 2f;
    public float spawnIntervalMin;
    public float spawnIntervalMax;

    // Start is called before the first frame update
    void Start()
    {
        InvokeRepeating(nameof(SpawnRandomAnimal), startTime, Random.Range(spawnIntervalMin, spawnIntervalMax));
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
        // Calculate the angle perpendicular to the spawner's forward direction
        float perpendicularAngle = transform.eulerAngles.y + 90f;

        // Spawn Area from Left value to Right value relative to spawner
        float randomOffset = GetRandom(Left, Right);
        Vector3 spawnPosition = transform.position +
            Quaternion.Euler(0f, perpendicularAngle, 0f) * (Vector3.forward * randomOffset);


        Instantiate(animal, spawnPosition, transform.rotation);
    }

    float GetRandomVector() {
        if (Left < Right)
            return Random.Range(Left, Right);
        return Random.Range(Right, Left);
    }

    float GetRandom(float One, float Two) {
        if (One < Two)
            return Random.Range(One, Two);
        return Random.Range(Two, One);
    }
}
