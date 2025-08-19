#pragma once
#include <string>
#include "CPF.hpp"
#include "Person.hpp"  // Incluindo a classe base Person

// Boa prática: Não usar 'using namestpace std' em arquivos .hpp;

class Holder : public Person {
    public:
        // Constructor & Destructor
        Holder(std::string name, CPF cpf);
        ~Holder();

        // Getters
        std::string getName();
        
        // Setters
        void setName(std::string name);      
};