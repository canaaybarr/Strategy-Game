using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class SceneControl : MonoBehaviour
{
    
    public TextMeshProUGUI[] levelText;
    public int firstLevel;
    public Image image;
    private void Start()
    {
        
        if (!PlayerPrefs.HasKey("FakeLevelId"))
        {
            PlayerPrefs.SetInt("FakeLevelId", 1);
        }

        for (int i = 0; i < levelText.Length; i++)
        {
            levelText[i].text = "Level " + PlayerPrefs.GetInt("FakeLevelId");
        }
      
    }

    public int currentLevel
    {
        get
        {
            return SceneManager.GetActiveScene().buildIndex;
        }
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(currentLevel);
    }

    public void NextLevel()
    {
        PlayerPrefs.SetInt("FakeLevelId", PlayerPrefs.GetInt("FakeLevelId") + 1);
        if (SceneManager.sceneCountInBuildSettings == currentLevel + 1)
        {
            SceneManager.LoadScene(firstLevel);
            return;
        }
        SceneManager.LoadScene(currentLevel + 1);
    }
    public void VisibleThisWhenLastScene(GameObject visible)
    {
        if (SceneManager.sceneCountInBuildSettings == currentLevel + 1)
        {
            visible.SetActive(false);
            return;
        }
        visible.SetActive(true);

    }
}
