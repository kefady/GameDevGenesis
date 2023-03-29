using Player.PlayerAnimation;
using UnityEngine;

namespace Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class PlayerEntity : MonoBehaviour
    {
        [SerializeField] private AnimatorController _animator;

        [Header("HorizontalMovement")]
        [SerializeField] private float _horizontalSpeed;
        [SerializeField] private float _runSpeed;

        [SerializeField] private bool _faceRight;

        [Header("Jump")]
        [SerializeField] private float _jumpForce;

        private Rigidbody2D _rigidbody2D;
        
        private bool _isJumping;
        private bool _hasJump;
        private bool _isFalling;
        private bool _isRunning;

        private Vector2 _movement;

        private void Start()
        {
            _rigidbody2D = GetComponent<Rigidbody2D>();
        }

        private void Update()
        {
            if (_isJumping) ResetJump();
            if (_isFalling) ResetFall();

            UpdateFall();
            UpdateAnimation();
        }

        public void MoveHorizontally(float direction)
        {
            _movement.x = direction;
            SetDirection(direction);
            Move(direction, _isRunning ? _horizontalSpeed * _runSpeed : _horizontalSpeed);
        }

        public void Jump()
        {
            if (!_isJumping && _hasJump)
            {
                _isJumping = true;
                _isRunning = false;
                _rigidbody2D.velocity = new Vector2(_rigidbody2D.velocity.x, _jumpForce);
            }
        }
        
        public void Run()
        {
            _isRunning = !_isRunning;
        }
        
        private void Move( float direction, float speed)
        {
            var velocity = _rigidbody2D.velocity;
            velocity = new Vector2(direction * speed, velocity.y);
            _rigidbody2D.velocity = velocity;
        }
        
        private void SetDirection(float direction)
        {
            if ((_faceRight && direction < 0) || (!_faceRight && direction > 0))
            {
                FlipHorizontally();
            }
        }

        private void FlipHorizontally()
        {
            transform.Rotate(0, 180, 0);
            _faceRight = !_faceRight;
        }

        private void UpdateFall()
        {
            if (_rigidbody2D.velocity.y < 0)
            {
                _isFalling = true;
                _hasJump = false;
                _isRunning = false;
                return;
            }

            _hasJump = true;
        }
        
        private void ResetJump()
        {
            if (_rigidbody2D.velocity.y == 0)
            {
                _isJumping = false;
            }
        }

        private void ResetFall()
        {
            if (_rigidbody2D.velocity.y >= 0)
            {
                _isFalling = false;
            }
        }

        private void UpdateAnimation()
        {
            _animator.PlayAnimation(AnimationType.Idle, true);
            _animator.PlayAnimation(AnimationType.Move, _movement.magnitude > 0);
            _animator.PlayAnimation(AnimationType.Run, _isRunning);
            _animator.PlayAnimation(AnimationType.Jump, _isJumping);
            _animator.PlayAnimation(AnimationType.Fall, _isFalling);
        }
    }
}