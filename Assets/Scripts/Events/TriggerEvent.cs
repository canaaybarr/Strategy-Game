using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

[System.Serializable]
public struct TriggerEvent 
{
    public UnityEvent onEnter;
    public UnityEvent onStay;
    public UnityEvent onExit;

    public void InvokeOnEnter()
    {
        onEnter?.Invoke();
    }
    public void InvokeOnStay()
    {
        onStay?.Invoke();
    }
    public void InvokeOnExit()
    {
        onExit?.Invoke();
    }
}
