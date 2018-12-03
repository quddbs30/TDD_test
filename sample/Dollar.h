
class Dollar
{
  public:
    Dollar(int amount);
    ~Dollar(void) {}
    Dollar *times(int multiplier);
    bool equals(Dollar *obj);
    int amount;
};