#include "../include/Person.hpp"
#include <iostream>
#include <string>

Person::Person(std::string name, CPF cpf)
    : name(name), cpf(cpf)
{

}

// Getters
std::string Person::getName(){
    return name;
}

// Setters
void Person::setName(std::string name){
    this->name = name;
}

