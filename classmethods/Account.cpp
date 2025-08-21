#include "../include/Account.hpp"
#include "../include/Holder.hpp"
#include <iostream> 

int Account::numberAccounts = 0;

// Constructor
Account::Account(std::string number, Holder holder)
    : number(number), holder(holder), balance(0) 
{
    numberAccounts++;
}

Account::~Account(){
    numberAccounts--;
}

// Getters
std::string Account::getNumber() {
    return number;
}

float Account::getBalance(){
    return balance;
}

// Setters
void Account::setNumber(std::string accountNumber) {
    number = accountNumber;
}

void Account::setBalance(float newBalance) {
    balance = newBalance;
} 

// Regular Methods 
void Account::withdrawAmount(float withdrawNumber)
{
    if (withdrawNumber < 0)
    {
        return;
    }

    float whithdrawTax = withdrawNumber * 0.05;
    float totalWithdraw = withdrawNumber + whithdrawTax;

    if ((totalWithdraw) > balance)
    {
        std::cout << "Process failed! You're trying to withdraw a value bigger than your account balance!" << std::endl;
        return;
    }

    balance -= (totalWithdraw);
}

void Account::depositAmount(float depositNumber)
{
    if (depositNumber < 0)
    {
        std::cout << "You can't deposit a negative value!" << std::endl;
        return;
    }

    balance += depositNumber;
}