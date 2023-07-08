using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cube : MonoBehaviour
{
    public MeshRenderer Renderer;

    public float RotationSpeed = 1;
    [Range(0f, 1f)]
    public float RotationX;
    [Range(0f, 1f)]
    public float RotationY;
    [Range(0f, 1f)]
    public float RotationZ;

    public Color CubeColor;

    public bool Randomize;

    private Vector3 rotation;

    
    void Update()
    {
        if (Randomize)
        {
            Randomize = false;
            RotationX = Random.Range(0f, 1f);
            RotationY = Random.Range(0f, 1f);
            RotationZ = Random.Range(0f, 1f);
            CubeColor = new Color(
               Random.Range(0f, 1f),  
               Random.Range(0f, 1f),   
               Random.Range(0f, 1f),  
               Random.Range(0f, 1f)  
            );
            RotationSpeed = Random.Range(0f, 1000f);
        }
        Renderer.material.color = CubeColor;
        rotation = new Vector3(RotationX, RotationY, RotationZ);
        transform.Rotate(RotationSpeed * Time.deltaTime * rotation);
    }
}
