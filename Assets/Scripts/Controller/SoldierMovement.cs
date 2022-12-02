using Pathfinding;
using UnityEngine;

namespace Controller
{
    public class SoldierMovement : MonoBehaviour
    {
        private AIDestinationSetter _aiDestinationSetter;
        private AIPath _aıPath;
        private float _weldingCapacity = 20;
        private float _resourcesAboveMe = 0;
        private float _resourceCollectionValue = 2;

        private CharacterTraits _characterTraits;
        public bool resourceCollectible;
        public bool weldDrop;
        



        private MainGameController _mainGameController;

        private void Start()
        {
            _mainGameController = MainGameController.Instance;
            _aıPath = gameObject.GetComponent<AIPath>();
        }

        private void Update()
        {
            // Allows units to farm etc.
            // if (resourceCollectible)
            // {
            //     if (_aıPath.reachedEndOfPath)
            //     {
            //         if (_resourcesAboveMe <= _weldingCapacity)
            //         {
            //             _resourcesAboveMe += Time.deltaTime * _resourceCollectionValue;
            //         }
            //         else
            //         {
            //             _resourcesAboveMe = _weldingCapacity;
            //             // find a place to leave
            //             if (_mainGameController.FindRepositoryResource(this))
            //             {
            //             
            //                 weldDrop = true;
            //             }
            //         }
            //     }
            // }
            //
            // if (weldDrop)
            // {
            //     if (_aıPath.reachedEndOfPath)
            //     {
            //         if (_resourcesAboveMe <= _weldingCapacity)
            //         {
            //             _resourcesAboveMe += Time.deltaTime * _resourceCollectionValue;
            //         }
            //         else
            //         {
            //             _resourcesAboveMe = _weldingCapacity;
            //             resourceCollectible = false;
            //             
            //             // weld drop point
            //             if (_mainGameController.FindRepositoryResource(this))
            //             {
            //                 weldDrop = true;
            //                 _mainGameController.LeaveSource(_resourceCollectionValue);
            //             }
            //         }
            //     }
            // }
        }
        
        public void ClickMovement(Vector2 point)
        {
            _aiDestinationSetter.target.position = point;
            Debug.Log(_aiDestinationSetter.target.position);
            Debug.Log(point);
        }

        public void StartMovement(Vector2 sPosition)
        {
            _aiDestinationSetter = gameObject.GetComponent<AIDestinationSetter>();
            _aiDestinationSetter.target.position = sPosition;
        }

        // public void SourceMovement(SourceHouse sourceHouse)
        // {
        //     // start fundraising
        //     if (sourceHouse.GatherResources(this))
        //     {
        //        
        //     }
        //     
        // }

    }
}
