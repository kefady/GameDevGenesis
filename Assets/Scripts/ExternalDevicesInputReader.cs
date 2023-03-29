using Player;
using UnityEngine;

public class ExternalDevicesInputReader : IEntityInputSource
{
    public float HorizontalDirection => Input.GetAxisRaw("Horizontal");
    public bool Jump { get; private set; }
    public bool Flip { get; private set; }

    public void OnUpdate()
    {
        if (Input.GetButtonDown("Jump"))
        {
            Jump = true;
        }
        
        if (Input.GetButtonDown("Fire1"))
        {
            Flip = true;
        }
    }

    public void ResetOneTimeAction()
    {
        Jump = false;
        Flip = false;
    }
}