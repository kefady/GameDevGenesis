using System;
using Player.PlayerAnimation;
using UnityEngine;

namespace Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class PlayerEntity : MonoBehaviour
    {
        [SerializeField] private AnimatorController _animator;

        [Header("HorizontalMovement")] [SerializeField]
        private float _horizontalSpeed;

        [SerializeField] private bool _faceRight;

        [Header("Jump")] [SerializeField] private float _jumpForce;

        private Rigidbody2D _rigidbody2D;

        private bool _isJumping;
        private bool _hasJump;
        private bool _isFalling;

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
            _rigidbody2D.velocity = new Vector2(direction * _horizontalSpeed, _rigidbody2D.velocity.y);
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

        public void Jump()
        {
            if (!_isJumping && _hasJump)
            {
                _isJumping = true;
                _rigidbody2D.velocity = new Vector2(_rigidbody2D.velocity.x, _jumpForce);
            }
        }

        private void ResetJump()
        {
            if (_rigidbody2D.velocity.y == 0)
            {
                _isJumping = false;
            }
        }
        
        private void UpdateFall()
        {
            if (_rigidbody2D.velocity.y < 0)
            {
                _isFalling = true;
                _hasJump = false;
                return;
            }

            _hasJump = true;
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
            _animator.PlayAnimation(AnimationType.Run, _movement.magnitude > 0);
            _animator.PlayAnimation(AnimationType.Jump, _isJumping);
            _animator.PlayAnimation(AnimationType.Fall, _isFalling);
        }
    }
}