using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace UI
{
    public class UIManager : Singleton<UIManager>,IGameEvents
    {
        public CoinController coinController;
        public Slider slider;
        public UIEvents events;
        [HideInInspector]public int sceneId;
        
        [SerializeField] private TMP_Text sourceText;

        #region Information
        [Header("Build UI Traits")]
        [SerializeField] private Image buildSprite;
        [SerializeField] private TMP_Text buildName;
        [SerializeField] private TMP_Text buildTraits;
        
        [Header("Character UI Traits")]
        [SerializeField] private Image characterSprite;
        [SerializeField] private TMP_Text characterName;
        [SerializeField] private TMP_Text characterDamage;
        [SerializeField] private TMP_Text characterDamageSpeed;
        [SerializeField] private TMP_Text characterMovementSpeed;
        [SerializeField] private TMP_Text characterHp;
        [SerializeField] private TMP_Text characterTraitsText;
        
        #endregion

        public void UIInformationTrains(BuildingTraits buildingTraits,CharacterTraits characterTraits)
        {
            #region Build
            buildSprite.sprite = buildingTraits.buildingSprite;
            buildTraits.text = buildingTraits.buildingTraits;
            buildName.text = buildingTraits.buildingName;
            #endregion
            #region Character
            characterSprite.sprite = characterTraits.characterSprite;
            characterName.text = characterTraits.characterName;
            characterDamage.text = "" + characterTraits.damage;
            characterDamageSpeed.text = "" + characterTraits.damageSpeed;
            characterMovementSpeed.text = "" + characterTraits.movementSpeed;
            characterHp.text = "" + characterTraits.characterHp;
            characterTraitsText.text = characterTraits.traits;
            #endregion
        }
    
    
        #region Character&Build
        [Header("Character Image List UI")]
        [Tooltip("Character Resim Prefab nesnesini ekleyin.(Listenin index ine göre yukardan aşşağıya sıralanır)")]
        public List<GameObject> characterListPrefabs = new List<GameObject>();
        [Tooltip("Character Resim Prefab ının Spawnlanacağı point ekleyin.(Listenin index ine göre yukardan aşşağıya doğru resim eklenir sıralanır)")]
        public List<GameObject> characterListPoint = new List<GameObject>();
    
        [Header("Build Image List UI")]
        [Tooltip("Binaların Resim Prefab nesnesini ekleyin.(Listenin index ine göre yukardan aşşağıya sıralanır)")]
        public List<GameObject> buildingListPrefabs= new List<GameObject>();
        [Tooltip("Binaların Resim Prefab ının Spawnlanacağı point ekleyin.(Listenin index ine göre yukardan aşşağıya doğru resim eklenir sıralanır)")]
        public List<GameObject> buildingListPoint= new List<GameObject>();
    
        #endregion
    
    
        #region Instantiate
    
        public void InstantiateCharacter()
        {
            for (int i = 0; i < characterListPrefabs.Count; i++)
            {
                GameObject character = Instantiate(characterListPrefabs[i],characterListPoint[i].transform);
                InstantiateBuilding(i);
            }
        }
        public void InstantiateBuilding(int i)
        {
            if (i < buildingListPrefabs.Count)
            {
                GameObject build = Instantiate(buildingListPrefabs[i],buildingListPoint[i].transform);
            }
        }
    
        #endregion
        
        private void Start()
        {
            InstantiateCharacter();
            coinController.Start().WriteCurrentCoin();
        }

        #region GameEvent's Invokes
        public void InvokeLoadScene()
        {
            events.game.InvokeLoadScene();
        }
        public void InvokeStartGame()
        {
            events.game.InvokeStartGame();
        }
        public void InvokeWin()
        {
            coinController.SaveCoin();
            events.game.InvokeWin();
        }
        public void InvokeWin(float time)
        {
            Invoke("InvokeWin",time);
        }
        public void InvokeLose()
        {
            coinController.SaveCoin();
            events.game.InvokeLose();
        }


        public void InvokeLose(float time)
        {
            Invoke("InvokeLose",time);
        }

        #endregion

        #region Coin

        public void AddCoin(int value)
        {
            coinController.AddCoin(value).WriteCurrentCoin();
        }
        public void MultiCoin(int value)
        {
            coinController.MultiCoin(value).WriteCurrentCoin();
        }
        public void SpendCoin(int value)
        {
            coinController.SpendCoin(value).WriteCurrentCoin().WriteTotalCoin();
        }
        public void WriteTotalCoint()
        {
            coinController.WriteTotalCoin();
        }
        public void SaveCoin()
        {
            coinController.SaveCoin();
            WriteTotalCoint();
        }

        #endregion
    }
}
