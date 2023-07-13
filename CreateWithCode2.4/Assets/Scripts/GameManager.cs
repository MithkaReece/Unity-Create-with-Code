using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{
    static GameManager instance;

    public List<GameObject> targets;
    public GameObject titleScreen;

    float spawnRate = 1f;

    int score;
    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI gameOverText;
    // Start is called before the first frame update
    void Start()
    {
        instance = this;
    }

    public static void StartGame(int difficulty)
    {
        instance.InvokeRepeating(nameof(SpawnTarget), 0f, instance.spawnRate/difficulty);
        instance.score = 0;
        AddScore(0);
        instance.titleScreen.SetActive(false);
    }

    void SpawnTarget()
    {
        int randomTargetIndex = Random.Range(0, targets.Count);
        Instantiate(targets[randomTargetIndex]);
    }

    public static void AddScore(int scoreToAdd)
    {
        instance.score += scoreToAdd;
        instance.scoreText.text = "Score: " + instance.score;
    }

    public Button restartButton;

    static string[] tagsToRemove = new string[] { "Bad", "Good" };
    public static void GameOver()
    {
        instance.gameOverText.gameObject.SetActive(true);
        instance.CancelInvoke(nameof(SpawnTarget));
        //Remove all good and bad objects
        foreach(GameObject obj in FindObjectsOfType<GameObject>())
        {
            if(System.Array.IndexOf(tagsToRemove, obj.tag) != -1)
            {
                Destroy(obj);
            }
        }
        instance.restartButton.gameObject.SetActive(true);
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
}

