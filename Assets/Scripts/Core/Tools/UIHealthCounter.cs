using System;
using Player;
using TMPro;
using UnityEngine;

namespace Core.Tools
{
    public class UIHealthCounter : MonoBehaviour
    {
        [SerializeField] private PlayerEntity _playerEntity;
        private TextMeshProUGUI _textMeshPro;

        private void Start()
        {
            _textMeshPro = GetComponent<TextMeshProUGUI>();
        }

        private void Update()
        {
            _textMeshPro.SetText(_playerEntity.Health.ToString());
        }
    }
}