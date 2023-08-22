using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LivesController : MonoBehaviour
{
    public ScoreController scoreController;
    private float lives = 3;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Lives:" + lives.ToString());
    }

    private void OnEnable()
    {
        EventManager.RemoveLife += HandleRemoveLife;
    }

    private void OnDisable()
    {
        EventManager.RemoveLife -= HandleRemoveLife;
    }

    private void OnGUI()
    {
        Vector3 screenPosition = Camera.main.WorldToScreenPoint(transform.position);
        Rect hungerBarRect = new Rect(screenPosition.x - 50f, Screen.height - screenPosition.y + 20f, 100f, 10f);
        float fillAmount = lives / 3;

        // Draw the hunger bar background
        GUI.Box(hungerBarRect, string.Empty);

        // Draw the hunger bar fill
        Rect hungerFillRect = new Rect(hungerBarRect.x, hungerBarRect.y, hungerBarRect.width * fillAmount, hungerBarRect.height);
        DrawColoredTexture(hungerFillRect, Color.red);
    }

    private void DrawColoredTexture(Rect rect, Color color)
    {
        Texture2D texture = new Texture2D(1, 1);
        texture.SetPixel(0, 0, color);
        texture.Apply();

        GUI.DrawTexture(rect, texture);
    }


    void HandleRemoveLife() {
        lives -= 1;
        Debug.Log("Lives:" + lives.ToString());
        if(lives <= 0) {
            Debug.Log("Game Over");
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex);
        }
    }
}
