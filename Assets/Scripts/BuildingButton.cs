using System.Collections;
using System.Collections.Generic;
using Controller;
using UI;
using UnityEngine;

public class BuildingButton : MonoBehaviour
{
    [Tooltip("BuildingTraitsDen Özellik Bilgilerini Almak için")]
    public BuildingTraits buildingTraits;
    public CharacterTraits characterTraits;

    public void Information()
    {
        UIManager.Instance.UIInformationTrains(buildingTraits,characterTraits);
    }

    public void BuildHouse(int i)
    {
        MainGameController.Instance.ButtonHouseBuilding(i);
    }
}
