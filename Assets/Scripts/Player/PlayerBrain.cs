using System;
using System.Collections.Generic;
using System.Linq;
using Core.Services.Updater;
using InputReader;

namespace Player
{
    public class PlayerBrain : IDisposable
    {
        private readonly PlayerEntity _playerEntity;
        private readonly List<IEntityInputSource> _inputSources;

        public PlayerBrain(PlayerEntity playerEntity, List<IEntityInputSource> inputSources)
        {
            _playerEntity = playerEntity;
            _inputSources = inputSources;
            ProjectUpdater.Instance.FixedUpdateCalled += OnFixedUpdate;
        }

        public void Dispose() => ProjectUpdater.Instance.FixedUpdateCalled -= OnFixedUpdate;

        private void OnFixedUpdate()
        {
            _playerEntity.MoveHorizontally(GetHorizontalDirection());
            if (IsJump()) _playerEntity.Jump();
            if (IsFlip()) _playerEntity.Run();
            foreach (var entityInputSource in _inputSources)
            {
                entityInputSource.ResetOneTimeAction();
            }
        }

        private float GetHorizontalDirection()
        {
            foreach (var entityInputSource in _inputSources)
            {
                if (entityInputSource.HorizontalDirection == 0) continue;
                return entityInputSource.HorizontalDirection;
            }

            return 0;
        }

        private bool IsJump() => _inputSources.Any(source => source.Jump);
        private bool IsFlip() => _inputSources.Any(source => source.Flip);
    }
}