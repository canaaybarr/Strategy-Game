using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
/// <summary>
/// Oyun Bittikten sonra tetiklenecek eventleri bar?nd?r?r.
/// </summary>
[System.Serializable]
public struct EndGameEvents
{
    /// <summary>
    /// Win ve Lose icin ortak islemleri tetikler.
    /// </summary>
    public UnityEvent defaultEnd;
    /// <summary>
    /// Win durumunda tetiklenir.
    /// </summary>
    public UnityEvent win;
    /// <summary>
    /// Lose durumunda tetiklenir.
    /// </summary>
    public UnityEvent lose;

    
    public void InvokeLose()
    {
        InvokeDefaultEnd();
        lose?.Invoke();
    }
    public void InvokeWin()
    {
        InvokeDefaultEnd();
        win?.Invoke();
    }
    private void InvokeDefaultEnd()
    {
        defaultEnd?.Invoke();
    }

}
