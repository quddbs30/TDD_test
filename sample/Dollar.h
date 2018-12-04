
class Dollar
{
  public:
    int amount;

    Dollar(int amount);
    ~Dollar(void) {}
    Dollar *times(int multiplier);
    bool operator==(const Dollar &rhs) const
    {
      return amount == rhs.amount;
    }
};