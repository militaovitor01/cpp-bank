#include "../include/BankManager.hpp"
#include <string>

BankManager::BankManager(std::string name, CPF cpf, float salary)
    : Employee(name, cpf, salary)
{

}

float BankManager::bonus() const {
    return getSalary() * 0.5;
}