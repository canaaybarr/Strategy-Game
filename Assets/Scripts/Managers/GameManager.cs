using Controller;
using UI;
using UnityEngine;
using UnityEngine.SceneManagement;

//using ElephantSDK;

namespace Managers
{
    public class GameManager : MonoBehaviour,IGameEvents
    {
        // I kept Main Game Controller here to avoid using GetComponent.
        public MainGameController mainGameController;
        
        #region Template
        public GameEvents gameEvents;
        private int currentLevel;
        private bool isStartPlay;
        #region Singleton
                public static GameManager Instance { get; private set; }
        
                private void Awake()
                {
                    if (Instance != null)
                    {
                        Destroy(this);
                        return;
                    }
                    Instance = this;
                }
                #endregion
                private void Start()
                {
                    InvokeLoadScene();
                }
            
                #region GameEvent's Invokes
                public void InvokeLoadScene()
                {
                    currentLevel = SceneManager.GetActiveScene().buildIndex;
                    gameEvents.InvokeLoadScene();
                    // Elephant.LevelStarted(currentLevel);
                    UIManager.Instance?.InvokeLoadScene();
                
               
                }
        
                public void InvokeStartGame()
                {
                    if (isStartPlay)
                        return;
                    isStartPlay = true;
                    gameEvents.InvokeStartGame();
               
                    UIManager.Instance?.InvokeStartGame();
                }
        
                public void InvokeWin()
                {
                    // Elephant.LevelCompleted(currentLevel);
                    gameEvents.InvokeWin();
                    UIManager.Instance?.InvokeWin();
                }
        
                public void InvokeWin(float time)
                {
                    UIManager.Instance?.InvokeWin(time);
                }
        
                public void InvokeLose()
                {
                    // Elephant.LevelFailed(currentLevel);
                    gameEvents.InvokeLose();
                    UIManager.Instance?.InvokeLose(1);
                }
        
                public void InvokeLose(float time)
                {
                    UIManager.Instance?.InvokeLose(time);
                }
                #endregion
        
                public void HapticFeedback()
                {
                    // Vibration.VibratePop();
                }
        #endregion
    }
}
