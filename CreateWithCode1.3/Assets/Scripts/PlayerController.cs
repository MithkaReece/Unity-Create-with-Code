using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour
{
    public GameObject Pizza;
    private float ThrowCooldown = 0.2f;

    private float speed = 40f;
    private float minX = -20f;
    private float maxX = 20f;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private float horizontalInput;
    private System.DateTime LastThrown;

    // Update is called once per frame
    void Update()
    {
        if (Input.GetButton("ThrowFood"))
            SpawnFood();
        

        horizontalInput = Input.GetAxis("Horizontal");
        float translation = horizontalInput * speed * Time.deltaTime;
        float newPosition = Mathf.Clamp(transform.position.x + translation, minX, maxX);
        transform.position = new Vector3(newPosition, transform.position.y, transform.position.z);
    }

    private Vector3 offset = new Vector3(0, 0, 1);
    void SpawnFood() {
        if (LastThrown.AddSeconds(ThrowCooldown) < System.DateTime.Now)
        {
            GameObject instantiatedObject = Instantiate(Pizza, transform.position + offset, Pizza.transform.rotation);
            LastThrown = System.DateTime.Now;
        }
    }
}
