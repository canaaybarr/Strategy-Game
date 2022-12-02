
using System.Collections.Generic;
using UnityEngine;
namespace Controller
{
    public class RandomPosition : Singleton<RandomPosition>
    {
        [SerializeField]private List<Vector3> _randomPosList;
        public Vector2 RandomPos()
        {
            _randomPosList[0] = ( new Vector3(-1.1f, Random.Range(2, -2)));
            _randomPosList[1] = ( new Vector3(3.5f, Random.Range(2, -2)));
            _randomPosList[2] = ( new Vector3(Random.Range(-1.1f,3.5f), -2f));
            _randomPosList[3] = ( new Vector3(Random.Range(-1.1f,3.5f), 2f));
            Vector3 spawnPoint = _randomPosList[Random.Range(0, 4)];
            return spawnPoint;
        }
    }
}
