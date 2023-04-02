using System;
using Core.Animation;
using Core.Movement.Controller;
using Core.Movement.Data;
using UnityEngine;

namespace Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class PlayerEntity : MonoBehaviour
    {
        [SerializeField] private AnimatorController _animator;
        [SerializeField] private HorizontalMovementData _horizontalMovementData;
        [SerializeField] private JumpData _jumpData;
        [SerializeField] private float _maxHealth;

        private Rigidbody2D _rigidbody2D;
        private HorizontalMover _horizontalMover;
        private Jumper _jumper;

        public float CurrentVerticalPosition { get; private set; }
        public float Health { get; set; }
        public bool IsHitting { get; set; }

        private void Start()
        {
            _rigidbody2D = GetComponent<Rigidbody2D>();
            _horizontalMover = new HorizontalMover(_rigidbody2D, _horizontalMovementData);
            _jumper = new Jumper(_rigidbody2D, _jumpData);
            UpdateHealth();
        }

        private void Update()
        {
            if (_jumper.IsJumping) ResetJump();
            if (_jumper.IsFalling) ResetFall();

            UpdateFall();
            UpdateAnimation();

            CurrentVerticalPosition = _rigidbody2D.position.y;
        }

        public void MoveHorizontally(float direction) => _horizontalMover.MoveHorizontally(direction);

        public void Run() => _horizontalMover.Run();

        public void Jump()
        {
            if (_horizontalMover.IsRunning) Run();
            _jumper.Jump();
        }
        
        public void Hit(float damage)
        {
            Health -= damage;
            IsHitting = true;
        }
        
        public void UpdateHealth()
        {
            Health = _maxHealth;
        }

        private void UpdateFall() => _jumper.UpdateFall();

        private void ResetJump() => _jumper.ResetJump();

        private void ResetFall() => _jumper.ResetFall();

        private void UpdateAnimation()
        {
            _animator.PlayAnimation(AnimationType.Idle, true);
            _animator.PlayAnimation(AnimationType.Move, _horizontalMover.IsMoving);
            _animator.PlayAnimation(AnimationType.Run, _horizontalMover.IsRunning && _horizontalMover.IsMoving);
            _animator.PlayAnimation(AnimationType.Jump, _jumper.IsJumping);
            _animator.PlayAnimation(AnimationType.Fall, _jumper.IsFalling);
            _animator.PlayAnimation(AnimationType.Hit, IsHitting);
        }
    }
}