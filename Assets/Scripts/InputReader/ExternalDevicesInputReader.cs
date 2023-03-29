using System;
using Core.Services.Updater;
using UnityEngine;

namespace InputReader
{
    public class ExternalDevicesInputReader : IEntityInputSource, IDisposable
    {
        public float HorizontalDirection => Input.GetAxisRaw("Horizontal");
        public bool Jump { get; private set; }
        public bool Flip { get; private set; }

        public ExternalDevicesInputReader()
        {
            ProjectUpdater.Instance.UpdateCalled += OnUpdate;
        }

        public void ResetOneTimeAction()
        {
            Jump = false;
            Flip = false;
        }

        private void OnUpdate()
        {
            if (Input.GetButtonDown("Jump")) Jump = true;

            if (Input.GetKeyDown(KeyCode.LeftControl)) Flip = true;
        }

        public void Dispose() => ProjectUpdater.Instance.UpdateCalled -= OnUpdate;
    }
}