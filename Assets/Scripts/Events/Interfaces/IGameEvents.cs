using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IGameEvents
{
    /// <summary>
    /// Oyun, yuklendiginde tetiklenir.
    /// </summary>
    void InvokeLoadScene();
    /// <summary>
    /// Oyun,start olduğunda tetiklenir.
    /// </summary>
    void InvokeStartGame();
    /// <summary>
    /// Oyun, win olduğunda tetiklenir.
    /// </summary>
    void InvokeWin();
    /// <summary>
    /// Oyun, win oldugunda tetiklenir.
    /// </summary>
    /// <param name="time">Tetiklenme bekleme suresi</param>
    void InvokeWin(float time);
    /// <summary>
    /// Oyun, lose oldugunda tetiklenir.
    /// </summary>
    void InvokeLose();
    /// <summary>
    /// Oyun, lose oldugunda tetiklenir.
    /// </summary>
    /// <param name="time">Tetiklenme bekleme suresi</param>
    void InvokeLose(float time);

}
