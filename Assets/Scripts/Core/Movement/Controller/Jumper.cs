using System;
using Core.Movement.Data;
using UnityEngine;

namespace Core.Movement.Controller
{
    public class Jumper
    {
        private readonly JumpData _jumpData;
        private readonly Rigidbody2D _rigidbody;

        public bool IsJumping { get; private set; }
        public bool IsFalling { get; private set; }
        
        public Jumper(Rigidbody2D rigidbody2D, JumpData jumpData)
        {
            _rigidbody = rigidbody2D;
            _jumpData = jumpData;
        }
        
        public void Jump()
        {
            if (!IsJumping && !IsFalling)
            {
                IsJumping = true;
                _rigidbody.velocity = new Vector2(_rigidbody.velocity.x, _jumpData.JumpForce);
            }
        }

        public void UpdateFall()
        {
            if (Math.Round(_rigidbody.velocity.y, 3) < 0) IsFalling = true;

        }
        
        public void ResetJump()
        {
            if (Math.Round(_rigidbody.velocity.y, 3) == 0) IsJumping = false;

        }

        public void ResetFall()
        {
            if (Math.Round(_rigidbody.velocity.y, 3) >= 0) IsFalling = false;

        }
    }
}