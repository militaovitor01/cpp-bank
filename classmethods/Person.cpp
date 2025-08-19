#include "../include/Person.hpp"
#include "../include/CPF.hpp"
#include <iostream>
#include <string>

Person::Person(std::string name, CPF cpf)
    : name(name), cpf(cpf)
{
    checkNameSize(name);
}

// Getters
std::string Person::getName(){
    return name;
}

// Setters
void Person::setName(std::string name){
    this->name = name;
}

// Regular Methods
void Person::checkNameSize(std:: string name) 
{
    if(name.size() < 5){
        std::cout << "Your name must contain at least 5 carachteres!";
        exit(1);
    }
}

