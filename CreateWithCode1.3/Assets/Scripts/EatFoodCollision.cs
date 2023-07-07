using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EatFoodCollision : MonoBehaviour
{
    public int MaxHunger = 1;
    private float currentHunger = 0;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.CompareTag("Food"))
        {
            currentHunger += 1;
            Destroy(other.gameObject);
            if (currentHunger >= MaxHunger)
            {
                Destroy(gameObject);
                EventManager.TriggerAddScore(MaxHunger);
            }
        }else if (other.gameObject.CompareTag("Player")) {
            EventManager.TriggerRemoveLife();
        }
    }

    private void OnGUI()
    {
        Vector3 screenPosition = Camera.main.WorldToScreenPoint(transform.position);
        Rect hungerBarRect = new Rect(screenPosition.x - 50f, Screen.height - screenPosition.y + 20f, 100f, 10f);
        float fillAmount = currentHunger / MaxHunger;

        // Draw the hunger bar background
        GUI.Box(hungerBarRect, string.Empty);

        // Draw the hunger bar fill
        Rect hungerFillRect = new Rect(hungerBarRect.x, hungerBarRect.y, hungerBarRect.width * fillAmount, hungerBarRect.height);
        DrawColoredTexture(hungerFillRect, Color.green);
    }

    private void DrawColoredTexture(Rect rect, Color color)
    {
        Texture2D texture = new Texture2D(1, 1);
        texture.SetPixel(0, 0, color);
        texture.Apply();

        GUI.DrawTexture(rect, texture);
    }
}
