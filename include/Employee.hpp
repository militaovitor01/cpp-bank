#pragma once 

#include <string>
#include "CPF.hpp"
#include "Person.hpp"

class Employee : public Person{
    private:
        float salary;

    public:
        // Constructor
        Employee(std::string name, CPF cpf, float salary);

        // Getters
        float getSalary() const;
        
        // Setters;
        void setSalary(float salary);

        // Regular Methods
        virtual float bonus() const = 0;
};