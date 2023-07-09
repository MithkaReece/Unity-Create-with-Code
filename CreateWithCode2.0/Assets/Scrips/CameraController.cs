using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraController : MonoBehaviour
{
    private AudioSource music;
    // Start is called before the first frame update
    void Start()
    {
        music = GetComponent<AudioSource>();
        EventManager.GameOver += StopMusic;
    }

    void StopMusic()
    {
        music.Stop();
    }
}
