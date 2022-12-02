using JetBrains.Annotations;
using UnityEngine.Events;

[System.Serializable]
public struct GameEvents
{
    public UnityEvent onLoadScene;
    public UnityEvent onStartGame;
   
    public EndGameEvents endEvents;

    public void InvokeLoadScene()
    {
        onLoadScene?.Invoke();
    }
    public void InvokeStartGame()
    {
        onStartGame?.Invoke();
    }
    public void InvokeWin()
    {
        endEvents.InvokeWin();
    }
    public void InvokeLose()
    {
        endEvents.InvokeLose();
    }
}