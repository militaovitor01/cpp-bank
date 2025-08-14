#pragma once
#include <string>
#include "CPF.hpp"

// Boa prática: Não usar 'using namestpace std' em arquivos .hpp;

class Holder{
    private:
        std::string name;
        CPF cpf;

    public:
        // Constructor & Destructor
        Holder(std::string name, CPF cpf);
        ~Holder();

        // Getters
        std::string getName();
        
        // Setters
        void setName(std::string name);

    private:
        void checkNameSize(std::string name);
};