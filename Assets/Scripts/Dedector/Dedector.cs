using UnityEngine;
using UnityEngine.Events;

public class Dedector : MonoBehaviour
{
    public UnityEvent onEnter;

    public void InvokeOnEnter()
    {
        onEnter?.Invoke();
    }

}
