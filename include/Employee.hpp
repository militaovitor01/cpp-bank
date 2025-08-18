#pragma once 

#include <string>
#include "CPF.hpp"

class Employee {
    private:
        std::string name;
        CPF cpf;
        float salary;

    public:
        // Constructor
        Employee(std::string name, CPF cpf, float salary);

        // Getters
        std::string getName();
        float getSalary();
        
        // Setters
        void setName(std::string name);
        void setSalary(float salary);
};