#include "../include/BankManager.hpp"
#include <string>

BankManager::BankManager(std::string name, CPF cpf, float salary, std::string password)
    : Employee(name, cpf, salary), Authenticable(password)
{

}

float BankManager::bonus() const {
    return getSalary() * 0.5;
}