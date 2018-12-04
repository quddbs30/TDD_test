#include <iostream>
#include "Dollar.h"

Dollar::Dollar(int amount)
{
    this->amount = amount;    
}

Dollar *Dollar::times(int multiplier)
{
    return new Dollar(amount * multiplier);
}