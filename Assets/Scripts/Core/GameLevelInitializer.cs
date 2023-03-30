using System;
using System.Collections.Generic;
using Core.Services.Updater;
using InputReader;
using Player;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Core
{
    public class GameLevelInitializer : MonoBehaviour
    {
        [SerializeField] private PlayerEntity _playerEntity;
        [SerializeField] private GameUIInputView _gameUIInputView;
        [SerializeField] private float _minVerticalPosition;

        private ExternalDevicesInputReader _externalDevicesInput;
        private PlayerSystem _playerSystem;
        private ProjectUpdater _projectUpdater;

        private List<IDisposable> _disposables;

        private void Awake()
        {
            _disposables = new List<IDisposable>();
            if (ProjectUpdater.Instance == null) _projectUpdater = new GameObject().AddComponent<ProjectUpdater>();
            else _projectUpdater = ProjectUpdater.Instance as ProjectUpdater;
            _externalDevicesInput = new ExternalDevicesInputReader();
            _disposables.Add(_externalDevicesInput);
            _playerSystem = new PlayerSystem(_playerEntity, new List<IEntityInputSource>
            {
                _gameUIInputView,
                _externalDevicesInput
            });
        }

        private void Update()
        {
            if (Input.GetKeyDown(KeyCode.Escape)) _projectUpdater.IsPaused = !_projectUpdater.IsPaused;
            if (_playerEntity.CurrentVerticalPosition <= _minVerticalPosition || _playerEntity.Health <= 0) RestartLevel();
        }

        private void OnDestroy()
        {
            foreach (var disposable in _disposables)
            {
                disposable.Dispose();
            }
        }

        private void RestartLevel()
        {
            _playerEntity.transform.position = new Vector3(-11, 6.5f, 0);
            _playerEntity.UpdateHealth();
        }
    }
}