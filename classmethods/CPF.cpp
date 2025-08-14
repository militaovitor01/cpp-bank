#include "../include/CPF.hpp"
#include <iostream>

CPF::CPF(std::string name, std::string number, std::string birthDate)
    : name(name), number(number), birthDate(birthDate)
{

}

// Destructor
CPF::~CPF()
{
}

// Getters
std::string CPF::getName(){
    return this->name;
}

std::string CPF::getNumber(){
    return this->number;
}

std::string CPF::getBirthDate(){
    return this->birthDate;
}

// Setters
void CPF::setName(std::string name) {
    this->name = name;
}

void CPF::setNumber(std::string number) {
    this->number = number;
}

void CPF::setBirthDate(std::string birthDate) {
    this->birthDate = birthDate;
}

// Regular Methods
bool CPF::verifyNumberPattern(std::string number) {
    if(number.size() <= 0 || number.size() > 14){
        std::cout << "Your CPF is out of the pattern." << std::endl; 
        return false;
    }

    return true;
}