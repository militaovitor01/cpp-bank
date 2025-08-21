#pragma once
#include "Holder.hpp"
#include <string>
// Boa prática: Não usar 'using namestpace std' em arquivos .hpp;

class Account {
    private:
        std::string number;
        Holder holder;
        float balance;

    public:
        static int numberAccounts;

    public:
        // Constructor
        Account(std::string number, Holder holder);

        // Destructor
        ~Account();
        
        // Getters
        std::string getNumber();
        std::string getHolderCPF();
        std::string getHolderName();
        float getBalance(); 

        // Setters 
        void setNumber(std::string number);
        void setBalance(float balance); 

        // Methods
        virtual float withdrawTax() const = 0; // Não possui implementacao padrao;
        void withdrawAmount(float withdrawNumber);
        void depositAmount(float depositNumber);
        void transferBalanceToAnotherAccount(Account& account, float value);
};