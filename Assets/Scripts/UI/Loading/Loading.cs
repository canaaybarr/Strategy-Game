using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
/// <summary>
/// Loading islemlerini yapar.
/// </summary>
public class Loading : MonoBehaviour
{
    private int levelId;
    private int currentLevel;
    private void Start()
    {
       
        currentLevel = SceneManager.GetActiveScene().buildIndex;
       // UIManager.Instance.sceneId = currentLevel;
        //Eger cihaz ilk defa calistiriliyorsa
        //Bir PlayerPrefs olusturulur.
        if (!PlayerPrefs.HasKey("LevelId"))
        {
            PlayerPrefs.SetInt("LevelId", currentLevel + 1);
        }
        if (!PlayerPrefs.HasKey("FirstLevel"))
        {
            PlayerPrefs.SetInt("FirstLevel", currentLevel + 1);
        }

        if (currentLevel == PlayerPrefs.GetInt("LevelId"))
        {
            PlayerPrefs.SetInt("LevelId", currentLevel + 1);
        }
        //en son oynanan levelin sanne id numaras?n? aktar?yoruz.
        levelId = PlayerPrefs.GetInt("LevelId");
       
       
    }
   
}
