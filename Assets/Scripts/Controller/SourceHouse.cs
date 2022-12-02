using UnityEngine;

namespace Controller
{
    public class SourceHouse : MonoBehaviour
    {
        public float amount;
        public GameObject[] sourcePoint;
        
        [Tooltip("Is the source point empty?")]
        public bool[] sourcePointFill;


        
        
        public bool GatherResources(SoldierMovement soldierMovement)
        {
            for (int i = 0; i < sourcePointFill.Length; i++)
            {
                if (!sourcePointFill[i])
                {
                    Debug.Log("s");
                    soldierMovement.ClickMovement(sourcePoint[i].gameObject.transform.position);
                    sourcePointFill[i] = true;
                    return (true);
                }
            }
            return (false);
        }
    }
}
