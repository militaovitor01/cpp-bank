#include "../include/Holder.hpp"
#include "../include/Person.hpp"
#include "../include/CPF.hpp"
#include <iostream>

// Constructor
Holder::Holder(std::string name, CPF cpf, std::string password)
    : Person(name, cpf), Authenticable(password)
{
    
}

// Destructor
Holder::~Holder()
{
}

// Getters
std::string Holder::getName(){
    return Person::getName();  // Chamando o método da classe base
}

// Setters
void Holder::setName(std::string name){
    Person::setName(name);  // Chamando o método da classe base
}


