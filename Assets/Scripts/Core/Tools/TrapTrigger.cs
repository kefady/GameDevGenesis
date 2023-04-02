using System;
using Player;
using UnityEngine;

namespace Core.Tools
{
    public class TrapTrigger : MonoBehaviour
    {
        [SerializeField] private PlayerEntity _playerEntity;
        [SerializeField] private float _damage;
        
        private void OnTriggerStay2D(Collider2D other)
        {
            _playerEntity.Hit(_damage);
        }

        private void OnTriggerExit2D(Collider2D other)
        {
            _playerEntity.IsHitting = false;
        }
    }
}