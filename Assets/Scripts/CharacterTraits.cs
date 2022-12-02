using UnityEngine;
using UnityEngine.UI;

[CreateAssetMenu(fileName = "New CharacterTraits",menuName = "CharacterTraits")]
public class CharacterTraits : ScriptableObject
{
    [Header("CharacterTraits")]
    [Tooltip("Character Sprite ini içine atiniz")]
    public Sprite characterSprite;
    [Tooltip("Character Sprite ini içine atiniz")]
    public string characterName;
    [Tooltip("Character Özelliklerini yaziniz Sprite")]
    public string traits;
    [Tooltip("Ne kadar Hasar verdiğini giriniz")]
    public float damage;
    [Tooltip("Ne kadar hizli vuracağini giriniz")]
    public float damageSpeed;
    [Tooltip("Charachterin Yürüme Hızı giriniz")]
    public float movementSpeed;
    [Tooltip("Charachterin Canını giriniz")]
    public float characterHp;

}