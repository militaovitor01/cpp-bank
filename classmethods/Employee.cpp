#include "../include/Employee.hpp"
#include <iostream>
#include <string>

Employee::Employee(std::string name, CPF cpf, float salary)
    : name(name), cpf(cpf), salary(salary)
{

}

// Getters
std::string Employee::getName(){
    return name;
}

float Employee::getSalary(){
    return salary;
}

// Setters
void Employee::setName(std::string name){
    this->name = name;
}

void Employee::setSalary(float salary){
    this->salary = salary;
}