﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControllerX : MonoBehaviour
{
    public float maxY;
    public float maxSpeed;

    public bool gameOver;

    public float floatForce;
    public float gravityModifier = 1.5f;
    private Rigidbody playerRb;

    public ParticleSystem explosionParticle;
    public ParticleSystem fireworksParticle;

    private AudioSource playerAudio;
    public AudioClip moneySound;
    public AudioClip explodeSound;
    public AudioClip bounceSound;

    private Renderer playerRenderer;

    // Start is called before the first frame update
    void Start()
    {
        Physics.gravity *= gravityModifier;
        playerAudio = GetComponent<AudioSource>();

        playerRb = GetComponent<Rigidbody>();
        // Apply a small upward force at the start of the game
        playerRb.AddForce(Vector3.up * 5, ForceMode.Impulse);

        playerRenderer = GetComponent<Renderer>();

    }

    // Update is called once per frame
    void Update()
    {
        // While space is pressed and player is low enough, float up
        if (transform.position.y < maxY && Input.GetKey(KeyCode.Space) && !gameOver)
        {
            //Scale down force to limit to maxSpeed
            //float scale = playerRb.velocity.magnitude > maxSpeed ? maxSpeed / playerRb.velocity.magnitude : 1f;

            playerRb.AddForce(Vector3.up * floatForce * Time.deltaTime);
        }
    }

    private void OnCollisionEnter(Collision other)
    {
        // if player collides with bomb, explode and set gameOver to true
        if (other.gameObject.CompareTag("Bomb"))
        {
            Destroy(other.gameObject);
            StartCoroutine(KillPlayer());
        } 

        // if player collides with money, fireworks
        else if (other.gameObject.CompareTag("Money"))
        {
            fireworksParticle.Play();
            playerAudio.PlayOneShot(moneySound, 1.0f);
            Destroy(other.gameObject);

        }

        else if (other.gameObject.CompareTag("BounceFloor"))
        {
            playerAudio.PlayOneShot(bounceSound, 1.0f);
            playerRb.AddForce(Vector3.up * 10, ForceMode.Impulse);
        }

    }


    private IEnumerator KillPlayer()
    {
        playerRenderer.enabled = false;
        explosionParticle.Play();
        playerAudio.PlayOneShot(explodeSound, 1.0f);
        gameOver = true;
        Debug.Log("Game Over!");
        

        yield return new WaitForSeconds(1.0f);

        Destroy(gameObject);
    }

}
