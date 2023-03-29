namespace InputReader
{
    public interface IEntityInputSource
    {
        float HorizontalDirection { get; }
        bool Jump { get; }
        bool Flip { get; }

        void ResetOneTimeAction();
    }
}