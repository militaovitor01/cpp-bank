#include "../include/Holder.hpp"
#include <iostream>

// Constructor
Holder::Holder(std::string name, CPF cpf)
    : name(name), cpf(cpf) 
{
    checkNameSize(name);
}

// Destructor
Holder::~Holder()
{
}

// Getters
std::string Holder::getName(){
    return name;
}

// Setters
void Holder::setName(std::string name){
    this->name = name;
}

// Regular Methods
void Holder::checkNameSize(std:: string name) 
{
    if(name.size() < 5){
        std::cout << "Your name must contain at least 5 carachteres!";
        exit(1);
    }
}