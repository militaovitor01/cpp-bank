#include "../include/Employee.hpp"
#include <iostream>
#include <string>

Employee::Employee(CPF cpf, float salary)
    : Person(cpf, salary)
{

}

// Getters
float Employee::getSalary(){
    return salary;
}

// Setters
void Employee::setSalary(float salary){
    this->salary = salary;
}