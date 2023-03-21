using UnityEngine;

namespace Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class PlayerEntity : MonoBehaviour
    {
        [Header("HorizontalMovement")] [SerializeField]
        private float _horizontalSpeed;

        [SerializeField] private bool _faceRight;

        [Header("Jump")] [SerializeField] private float _jumpForce;

        private Rigidbody2D _rigidbody2D;
        
        private bool _isJumping;

        private void Start()
        {
            _rigidbody2D = GetComponent<Rigidbody2D>();
        }

        private void Update()
        {
            if (_isJumping)
            {
                JumpReset();
            }
        }

        public void MoveHorizontally(float direction)
        {
            SetDirection(direction);
            _rigidbody2D.velocity = new Vector2(direction * _horizontalSpeed, _rigidbody2D.velocity.y);
        }

        public void Jump()
        {
            if (!_isJumping)
            {
                _isJumping = true;
                _rigidbody2D.velocity = new Vector2(_rigidbody2D.velocity.x, _jumpForce);
            }
        }

        private void SetDirection(float direction)
        {
            if ((_faceRight && direction < 0) || (!_faceRight && direction > 0))
            {
                Flip();
            }
        }

        private void Flip()
        {
            transform.Rotate(0, 180, 0);
            _faceRight = !_faceRight;
        }

        private void JumpReset()
        {
            if (_rigidbody2D.velocity.y == 0)
            {
                _isJumping = false;
            }
        }
    }
}