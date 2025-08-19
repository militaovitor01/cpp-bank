#pragma once 

#include <string>
#include "CPF.hpp"

class Person {
    private:
        std::string name;
        CPF cpf;

    public:
        // Constructor
        Person(std::string name, CPF cpf);

        // Getters
        std::string getName();
        float getSalary();
        
        // Setters
        void setName(std::string name);
        void setSalary(float salary);

        // Regular Methods
    private:
        void checkNameSize(std::string name);
};