#include "../include/SavingsAccount.hpp"
#include <iostream>

/*
SavingsAccount::SavingsAccount()
{
}
*/

float SavingsAccount:: withdrawTax() const {
    std::cout << "You're withdrawing from a Savings Account" << std::endl;
    return 0.03;
}