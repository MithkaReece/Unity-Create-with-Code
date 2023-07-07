using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public GameObject[] FoodPrefabs;
    private float ThrowCooldown = 0.2f;

    private float speed = 15f;
    private float minX = -20f;
    private float maxX = 20f;

    private float minZ = 0f;
    private float maxZ = 25f;

    private Animator animator;
    // Start is called before the first frame update
    void Start()
    {
        animator = GetComponent<Animator>();
    }

    private float horizontalInput;
    private float verticalInput;
    private System.DateTime LastThrown;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton("ThrowFood"))
            SpawnRandomFood();
        

        horizontalInput = Input.GetAxis("Horizontal");
        verticalInput = Input.GetAxis("Vertical");

        float Speed_f = (Mathf.Abs(horizontalInput) + Mathf.Abs(verticalInput)) / 2f;
        animator.SetFloat("Speed_f", Speed_f);

        float xTranslation = horizontalInput * speed * Time.deltaTime;
        float clampedX = Mathf.Clamp(transform.position.x + xTranslation, minX, maxX);

        float zTranslation = verticalInput * speed * Time.deltaTime;
        float clampedZ = Mathf.Clamp(transform.position.z + zTranslation, minZ, maxZ);
        transform.position = new Vector3(clampedX, transform.position.y, clampedZ);
    }

    private Vector3 offset = new Vector3(0, 0, 1);
    void SpawnRandomFood() {
        if (LastThrown.AddSeconds(ThrowCooldown) < System.DateTime.Now)
        {
            int RandomFoodIndex = Random.Range(0, FoodPrefabs.Length);
            GameObject RandomFood = FoodPrefabs[RandomFoodIndex];
            Instantiate(RandomFood, transform.position + offset, RandomFood.transform.rotation);
            LastThrown = System.DateTime.Now;
        }
    }
}
