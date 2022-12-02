using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "New BuildingTraits",menuName = "BuildingTraits")]
public class BuildingTraits : ScriptableObject
{
    [Header("BuildingTraits")]
    [Tooltip("Build Image Sprite")]
    [SerializeField] public Sprite buildingSprite;
    [Tooltip("Build İsmini Yazınız")]
    [SerializeField] public string buildingName;
    [FormerlySerializedAs("buildingtraits")]
    [Tooltip("Build Özelliklerini Yazınız")]
    [SerializeField] public string buildingTraits;
    [Tooltip("Build Satın alma Değeri")]
    [SerializeField] public float buildingPrice;
}