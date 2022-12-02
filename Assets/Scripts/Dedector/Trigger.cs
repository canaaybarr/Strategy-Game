using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Trigger : Dedector
{
    private void OnTriggerEnter(Collider other)
    {
        InvokeOnEnter();
    }

   
}
