using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerController : MonoBehaviour
{
    public float jumpForce;
    public float gravityModifier;
    public ParticleSystem explosionParticle;
    public ParticleSystem dirtParticle;
    public AudioClip jumpSound;
    public AudioClip crashSound;

    
    private bool isGrounded = false;
    private Rigidbody rb;
    private Animator playerAnimator;
    private AudioSource playerAudio;

    private bool gameOver = false;
    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody>();
        playerAnimator = GetComponent<Animator>();
        playerAudio = GetComponent<AudioSource>();
        Physics.gravity *= gravityModifier;
    }

    // Update is called once per frame
    void Update()
    {
        if (gameOver)
            return;
        if (isGrounded && Input.GetButton("Jump"))
        {
            rb.AddForce(Vector3.up * jumpForce, ForceMode.Impulse);
            isGrounded = false;
            playerAnimator.SetTrigger("Jump_trig");
            dirtParticle.Stop();
            playerAudio.PlayOneShot(jumpSound, 1.0f);
        }
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            dirtParticle.Play();
            isGrounded = true;
        }else if (collision.gameObject.CompareTag("Obstacle"))
        {
            if (gameOver)
                return;
            dirtParticle.Stop();
            gameOver = true;
            playerAnimator.SetBool("Death_b", true);
            playerAnimator.SetInteger("DeathType_int", 1);
            Debug.Log("Game Over!");
            EventManager.TriggerGameOver();
            explosionParticle.Play();
            playerAudio.PlayOneShot(crashSound, 1.0f);
        }
        
    }

}
