#pragma once

#include <string>

class CPF{
    private:
        std::string name;
        std::string number;
        std::string birthDate;

    public:
        // Constructor & Destructor
        CPF(std::string name, std::string number, std::string birthDate);
        ~CPF();

        // Getters
        std::string getName();
        std::string getNumber();
        std::string getBirthDate();

        //Setters
        void setName(std::string name);
        void setNumber(std::string number);
        void setBirthDate(std:: string birthDate);

        // Regular Methods
        bool verifyNumberPattern(std::string number);
};
