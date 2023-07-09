using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public float jumpForce;
    public float gravityModifier;

    private bool gameOver = false;
    private bool isGrounded = false;
    private Rigidbody rb;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        Physics.gravity *= gravityModifier;
    }

    // Update is called once per frame
    void Update()
    {
        if (isGrounded && Input.GetButton("Jump"))
        {
            rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            isGrounded = false;
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            isGrounded = true;
        }else if (collision.gameObject.CompareTag("Obstacle"))
        {
            gameOver = true;
            Debug.Log("Game Over!");
            EventManager.TriggerGameOver();
        }
        
    }

}
