#include "../include/Employee.hpp"
#include <iostream>
#include <string>

Employee::Employee(std::string name, CPF cpf, float salary)
    : Person(name, cpf), salary(salary)
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