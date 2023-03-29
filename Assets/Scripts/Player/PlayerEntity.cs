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

        private Rigidbody2D _rigidbody2D;
        private HorizontalMover _horizontalMover;
        private Jumper _jumper;


        private void Start()
        {
            _rigidbody2D = GetComponent<Rigidbody2D>();
            _horizontalMover = new HorizontalMover(_rigidbody2D, _horizontalMovementData);
            _jumper = new Jumper(_rigidbody2D, _jumpData);
        }

        private void Update()
        {
            if (_jumper.IsJumping) ResetJump();
            if (_jumper.IsFalling) ResetFall();

            UpdateFall();
            UpdateAnimation();
        }

        public void MoveHorizontally(float direction) => _horizontalMover.MoveHorizontally(direction);

        public void Run() => _horizontalMover.Run();

        public void Jump()
        {
            if (_horizontalMover.IsRunning) Run();
            _jumper.Jump();
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
        }
    }
}