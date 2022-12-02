using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

[System.Serializable]
public struct DoThis
{
    public float value;
    public UnityEvent whenGreaterThisValue;
    public UnityEvent whenLessThisValue;
   
    public void InvokeReach(float currentValue)
    {

        if (value < currentValue)
        {
            whenGreaterThisValue?.Invoke();
        }
       
        if (value > currentValue)
        {
            
            whenLessThisValue?.Invoke();
        }
    }

   
}
public class Progress : MonoBehaviour
{
    public Image image;
    public List<DoThis> doHandler;
    [Header("Oyun bittiğinde bar kontrol edilecekse kullanilabilir.")]
    public DoThis whenGameFinish;
    [HideInInspector] public int totalValue;
    [HideInInspector] public int currentValue;
    [HideInInspector] public float barValue;
    [HideInInspector] public float counter;
    [HideInInspector] public bool isStop;

    private void Start()
    {
        
    }
    public void IsStop(bool isStop)
    {
        this.isStop = isStop;
    }
    public void SetCurrentValue(int currentValue)
    {
        this.currentValue = currentValue;
        SetBarValue(currentValue);
    }
    public void AddValue(int value)
    {
        if (isStop)
            return;
        StopAllCoroutines();
        StartCoroutine(PlayBar(value));
    }
    public void SubtractValue(int value)
    {
        if (isStop)
            return;
        StopAllCoroutines();
    }
    public void UpdateTotalValue(int value)
    {
        totalValue = value;
    }
    public void SetBarValue(float value)
    {
        if (isStop)
            return;
        barValue = value / totalValue;
        image.fillAmount = barValue;
        for (int i = 0; i < doHandler.Count; i++)
        {
            doHandler[i].InvokeReach(barValue);
        }
    }
   
    public IEnumerator PlayBar(int value)
    {
          
        counter=currentValue;
        currentValue += value;
      
        while (counter< currentValue)
        {
            counter += Time.deltaTime*value;
            SetBarValue(counter);
            
            yield return new WaitForEndOfFrame();

        }
        SetBarValue(counter);


    }
}
