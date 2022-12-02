using System.Collections.Generic;
using UnityEngine;

namespace Controller
{
    public class BuildMovement : MonoBehaviour
    {
        public BuildingTraits buildingTraits; 
        public CharacterTraits characterTraits;
        

        [Tooltip("Birim Prefabı alma Değeri")] [SerializeField]
        private GameObject soldierType;
        [SerializeField] private GameObject soldiersParent;
        [SerializeField] private float spawnRate;
        [SerializeField] private List<GameObject> soldiers;
        public Transform spawnPoint;
        public Vector3 spawnPos;

        public bool startProduction = false;

        
        private float _unitLimit;
        private float _time;

 
        void Start()
        {
            _time = spawnRate;
        }
        void Update()
        {
            UnitsSpawn();
        }

        void UnitsSpawn()
        {
            spawnRate -= Time.deltaTime;
            if (spawnRate <= 0 && startProduction && soldiers.Count < 15)
            {
                spawnPos = RandomPosition.Instance.RandomPos();
                spawnPos += transform.position;
                GameObject units = Instantiate(soldierType, spawnPos , Quaternion.identity, soldiersParent.transform);
                soldiers.Add(units);
                units.transform.GetComponentInChildren<SoldierMovement>().StartMovement(spawnPoint.position);
                spawnRate = _time;
            }
        }

        public void SpawnPosMovement(Vector2 point)
        {
            spawnPoint.position = point;
        }
    }
}
