using UnityEngine;
using Pathfinding;

namespace Controller
{
    public class AstarSceneBake : Singleton<AstarSceneBake>
    {
        public void BakeScene()
        {
            AstarPathEditor.MenuScan();
        }
    }
}
