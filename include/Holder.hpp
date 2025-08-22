#pragma once
#include <string>
#include "CPF.hpp"
#include "Person.hpp"
#include "Authenticable.hpp"

// Boa prática: Não usar 'using namestpace std' em arquivos .hpp;

class Holder : public Person, Authenticable {
    public:
        // Constructor & Destructor
        Holder(std::string name, CPF cpf, std::string password);
        ~Holder();

        // Getters
        std::string getName();
        
        // Setters
        void setName(std::string name);      
};