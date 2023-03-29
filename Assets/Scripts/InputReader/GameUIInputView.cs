using Player;
using UnityEngine;
using Button = UnityEngine.UI.Button;

namespace InputReader
{
    public class GameUIInputView : MonoBehaviour, IEntityInputSource
    {
        [SerializeField] private Joystick _joystick;
        [SerializeField] private Button _jumpButton;
        [SerializeField] private Button _flipButton;

        public float HorizontalDirection => _joystick.Horizontal;
        public bool Jump { get; private set; }
        public bool Flip { get; private set; }

        private void Awake()
        {
            _jumpButton.onClick.AddListener(() => Jump = true);
            _flipButton.onClick.AddListener(() => Flip = true);
        }

        private void OnDestroy()
        {
            _jumpButton.onClick.RemoveAllListeners();
            _flipButton.onClick.RemoveAllListeners();
        }

        public void ResetOneTimeAction()
        {
            Jump = false;
            Flip = false;
        }
    }
}