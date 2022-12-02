using System.Collections;
using System.Collections.Generic;

using UnityEngine;
using UnityEngine.Events;

public class Coin : MonoBehaviour
{
    public UnityEvent whenGetCoin;

    private void OnTriggerEnter(Collider other)
    {
        whenGetCoin?.Invoke();
        //gameObject.SetActive(false);
    }


}
