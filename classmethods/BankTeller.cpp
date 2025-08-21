#include "../include/BankTeller.hpp"
#include <string>

BankTeller::BankTeller(std::string name, CPF cpf, float salary)
    : Employee(name, cpf, salary)
{

}

float BankTeller::bonus() const {
    return getSalary() * 0.1;
}