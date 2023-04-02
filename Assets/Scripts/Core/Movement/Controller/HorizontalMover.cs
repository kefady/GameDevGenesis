using Core.Movement.Data;
using UnityEngine;

namespace Core.Movement.Controller
{
    public class HorizontalMover
    {
        private readonly Rigidbody2D _rigidbody;
        private readonly Transform _transform;
        private readonly HorizontalMovementData _horizontalMovementData;

        private Vector2 _movement;
        private bool _faceRight;
        
        public bool IsMoving => _movement.magnitude > 0;
        public bool IsRunning { get; private set; }

        public HorizontalMover(Rigidbody2D rigidbody2D, HorizontalMovementData horizontalMovementData)
        {
            _rigidbody = rigidbody2D;
            _transform = rigidbody2D.transform;
            _horizontalMovementData = horizontalMovementData;
            _faceRight = horizontalMovementData.FaceRight;
        }
        
        public void MoveHorizontally(float direction)
        {
            _movement.x = direction;
            SetDirection(direction);
            Move(direction, IsRunning ? _horizontalMovementData.HorizontalSpeed * _horizontalMovementData.RunSpeed : _horizontalMovementData.HorizontalSpeed);
        }

        public void Run()
        {
            IsRunning = !IsRunning;
        }
        
        private void Move( float direction, float speed)
        {
            var velocity = _rigidbody.velocity;
            velocity = new Vector2(direction * speed, velocity.y);
            _rigidbody.velocity = velocity;
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
            _transform.Rotate(0, 180, 0);
            _faceRight = !_faceRight;
        }
    }
}