#include "../include/CurrentAccount.hpp"
#include <iostream>
#include <string>

CurrentAccount::CurrentAccount(std::string number, Holder holder)
    : Account(number, holder)
{
}

 
float CurrentAccount:: withdrawTax() const {
    std::cout << "You're withdrawing from a Current Account" << std::endl;
    return 0.05;
}
