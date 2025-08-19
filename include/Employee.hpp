#pragma once 

#include <string>
#include "CPF.hpp"
#include "Person.hpp"

class Employee : public Person{
    private:
        float salary;

    public:
        // Constructor
        Employee(CPF cpf, float salary);

        // Getters
        float getSalary();
        
        // Setters;
        void setSalary(float salary);
};