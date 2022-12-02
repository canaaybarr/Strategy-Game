using UI;
using UnityEngine;
using Pathfinding;
using UnityEngine.EventSystems;

namespace Controller
{
    public enum Mod { Normal, BuildingSpawn};
    public class MainGameController : Singleton<MainGameController>
    {
        private Mod _mod = Mod.Normal;
        
        [SerializeField] private Color selectedColor;
        [SerializeField] private Color normalSelectedColor;
        [SerializeField] private Color oldBuildingColor;
        
        [SerializeField] private GameObject presentObject;
        [SerializeField] private LayerMask selectableObjLayers;
        [SerializeField] private GameObject parentBuilding;
        
        
        public BuildMovement[] resourceDropBuildings;
        public float totalSource;
        
        
        private BoxCollider2D _boxCollider2D;
        private SpriteRenderer _spriteRenderer;
        private GameObject _buildingHouse;
        public GameObject[] buildingHouseType;

        void Update()
        {
            if (EventSystem.current.IsPointerOverGameObject())
            {
                return;
            }

            if (_mod == Mod.Normal)
            {
                MouseInput();    
            }
            else if( _mod == Mod.BuildingSpawn && _buildingHouse != null)
            {
                // update Building Location
                Vector2 raycastPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                RaycastHit2D hit = Physics2D.Raycast(raycastPos, Vector2.zero,10, LayerMask.GetMask("BackGround"));
                bool canPutBuilding = false;
                if (Physics2D.Raycast(raycastPos, Vector2.zero,10, LayerMask.GetMask("BackGround")))
                {
                    _buildingHouse.transform.position = hit.point;
                    if (Physics2D.BoxCast(_buildingHouse.transform.position,_boxCollider2D.size *1.5f,0,Vector2.zero,10,LayerMask.GetMask("Build")))
                    {
                        _spriteRenderer.color = Color.red;
                    }
                    else
                    {
                        _spriteRenderer.color = Color.green;
                        canPutBuilding = true;
                    }
                    _buildingHouse.SetActive(true);
                }
                else
                {
                    _buildingHouse.SetActive(false);
                }                
                // update the color of the building according to the objects it overlap
                // ---------------------------------------------------------------------------------// 
                
                if(Input.GetMouseButtonDown(0))
                {
                    if (canPutBuilding)
                    {
                        _mod = Mod.Normal;
                        _spriteRenderer.color = oldBuildingColor;

                        GameObject consistingOfBuilding = Instantiate(_buildingHouse,parentBuilding.transform);
                        consistingOfBuilding.GetComponent<BuildMovement>().enabled = true;
                        consistingOfBuilding.GetComponent<BuildMovement>().startProduction = true;
                        consistingOfBuilding.layer = 7;
                        _buildingHouse.SetActive(false);
                        _buildingHouse = null;
                        AstarPathEditor.MenuScan();

                    }
                    
                    // try to put the building if right clicked
                }
                else if(Input.GetMouseButtonDown(1))
                {
                    // back to normal mode if left clicked
                    _mod = Mod.Normal;
                    _buildingHouse.SetActive(false);
                    _spriteRenderer.color = oldBuildingColor;
                    _buildingHouse = null;
                    
                }
            }
        }

        public void ButtonHouseBuilding(int i)
        {
            _mod = Mod.BuildingSpawn;
            _buildingHouse = buildingHouseType[i];
            _boxCollider2D = _buildingHouse.GetComponentInChildren<BoxCollider2D>();
            _spriteRenderer = _buildingHouse.GetComponentInChildren<SpriteRenderer>();
            
            oldBuildingColor = _spriteRenderer.color;
            _boxCollider2D.isTrigger = true;
        }

        #region MouseInputController
        void MouseInput()
        {
            // secim yapma 
            if (Input.GetMouseButtonDown(0))
            {
                
                if (Camera.main is { })
                {
                    Vector2 raycastPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                    RaycastHit2D hit = Physics2D.Raycast(raycastPos, Vector2.zero,10, selectableObjLayers);
                    LeavingElection();
                    Election(hit);
                }
                else
                {
                    LeavingElection();
                }
            }
            // emir verme
            else if (Input.GetMouseButtonDown(1))
            {
                if (presentObject != null)
                {
                    LayerMask layerPresent = LayerMask.GetMask("Units");
                    if (Camera.main is { })
                    {
                        if ( layerPresent == (layerPresent |  (1 << presentObject.layer)))
                        {
                            Vector2 raycastPos = Camera.main.ScreenToWorldPoint(Input.mousePosition); 
                            RaycastHit2D hit = Physics2D.Raycast(raycastPos, Vector2.zero,10);
                            if (Physics2D.Raycast(raycastPos, Vector2.zero,10, LayerMask.GetMask("PowerPlant")))
                            {
                                SoldierMovement soldierMovement = presentObject.GetComponent<SoldierMovement>();
                                if (soldierMovement != null)
                                {
                                    SourceHouse sourceHouse = hit.transform.gameObject.GetComponent<SourceHouse>();
                                    if (sourceHouse != null)
                                    {
                                        if (soldierMovement.resourceCollectible)
                                        {
                                            //soldierMovement.SourceMovement(sourceHouse);
                                        }
                                        else
                                        {
                                            soldierMovement.ClickMovement(hit.point);
                                        }
                                    }
                                }
                            }
                            else if (Physics2D.Raycast(raycastPos, Vector2.zero,10, LayerMask.GetMask("BackGround")))
                            { 
                                SoldierMovement soldierMovement = presentObject.GetComponent<SoldierMovement>(); 
                                if (soldierMovement != null) 
                                { 
                                    soldierMovement.ClickMovement(hit.point); 
                                } 
                            }
                        }
                        layerPresent = LayerMask.GetMask("Build");
                        if ( layerPresent == (layerPresent |  (1<<presentObject.layer)))
                        {
                            BuildMovement buildMovement = presentObject.GetComponentInParent<BuildMovement>();
                            UIManager.Instance.UIInformationTrains(buildMovement.buildingTraits,buildMovement.characterTraits);
                            
                            Vector2 raycastPos = Camera.main.ScreenToWorldPoint(Input.mousePosition);
                            RaycastHit2D hit = Physics2D.Raycast(raycastPos, Vector2.zero,10, LayerMask.GetMask("BackGround"));
                            
                            
                            if (buildMovement != null)
                            {
                                buildMovement.SpawnPosMovement(hit.point);
                            }
                        }
                    } 
                }
            }
        }
        void LeavingElection()
        {
            if (presentObject != null)
            {
                SpriteRenderer p_Sr;
                p_Sr = presentObject.GetComponent<SpriteRenderer>();
                if (p_Sr != null)
                {
                    p_Sr.color = normalSelectedColor;
                    presentObject = null;
                }
            }
        }
        void Election(RaycastHit2D hit)
        {
            if (hit.collider != null)
            {
                SpriteRenderer sR;
                presentObject = hit.collider.gameObject;
                sR = presentObject.GetComponent<SpriteRenderer>();
                if (sR != null)
                {
                    normalSelectedColor = sR.color;
                    sR.color = selectedColor;
                    // gives building information
                    if (presentObject.GetComponent<BuildMovement>())
                    {
                        BuildMovement buildMovement = presentObject.GetComponent<BuildMovement>();;
                        UIManager.Instance.UIInformationTrains(buildMovement.buildingTraits,buildMovement.characterTraits);
                    }
                }
            }
        }
        #endregion
        
        public void LeaveSource(float addSource)
                {
                    totalSource += addSource;
                }
        
        // public bool FindRepositoryResource(SoldierMovement soldierMovement)
        // {
        //     if (resourceDropBuildings.Length == 0)
        //     {
        //         return false;
        //     }
        //     else
        //     {
        //         Vector3 soldierLocation = soldierMovement.gameObject.transform.position;
        //         Vector3 nearestLocation = resourceDropBuildings[0].spawnPoint.position;
        //         float closestDistance = Vector3.Distance(soldierLocation, nearestLocation);
        //         for (int i = 1; i < resourceDropBuildings.Length; i++)
        //         {
        //             Vector3 locationNow = resourceDropBuildings[i].spawnPoint.position;
        //             float distanceNow = Vector3.Distance(soldierLocation, locationNow);
        //             
        //             if (distanceNow < closestDistance)
        //             {
        //                 closestDistance = distanceNow;
        //                 nearestLocation = locationNow;
        //             }
        //         }
        //         soldierMovement.ClickMovement(nearestLocation);
        //         return true;
        //     }
        //     return false;
        // }
    }
}
