using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

[System.Serializable]
public struct CoinController
{
    private int totalCoin;
    [HideInInspector] public int currentCoint;
    [Header("TEXTS")]
    [Tooltip("Toplam altin sayisini gosterecek text nesnesini ekleyin.")]
    public TextMeshProUGUI totalCoinText;
    [Tooltip("Level icinde aktif olarak toplanan altin sayisini gosteren text nesnesini ekleyin.")]
    public TextMeshProUGUI currentCoinText;
    
    public CoinController Start()
    {
        currentCoint = 0; //baslangic olarak 0 olarak level'a baslar.(level icinde aktif olarak toplanan coin'i gosterecek)
        if (!PlayerPrefs.HasKey("Coin"))
        {
            PlayerPrefs.SetInt("Coin", 0);
        }


        WriteCurrentCoin().WriteTotalCoin();
        return this;
    }
    public int getTotalCoin
    {
        get
        {
            return PlayerPrefs.GetInt("Coin");
        }
    }
    public CoinController AddCoin(int coin)
    {
        currentCoint += coin;
       
        return this;
    }
    public CoinController MultiCoin(int coin)
    {
        currentCoint = currentCoint * coin;
        return this;
    }
    public CoinController WriteCurrentCoin()
    {
        if (currentCoinText == null)
            return this;
        currentCoinText.text = currentCoint + "";
        return this;
    }
    public CoinController WriteTotalCoin()
    {
        if (totalCoinText == null)
            return this;
        totalCoinText.text = (getTotalCoin)+"";
        return this;
    }
    public CoinController SaveCoin()
    {
        totalCoin = getTotalCoin;
        totalCoin += currentCoint;
        currentCoint = 0;
        PlayerPrefs.SetInt("Coin", totalCoin);
        return this;
    }

    public bool MoneyEnough(int value)
    {
        return PlayerPrefs.GetInt("Coin") > value;
    }

    public CoinController SpendCoin(int value)
    {
        if (!MoneyEnough(value))
            return this;
        totalCoin = getTotalCoin;
        totalCoin -= value;
        totalCoin = totalCoin < 0 ? 0 : totalCoin;
        PlayerPrefs.SetInt("Coin", totalCoin);
        return this;
    }

}
