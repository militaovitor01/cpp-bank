#include "Employee.hpp"

class BankTeller final : public Employee{
    public:
        // Constructor
        BankTeller(std::string name, CPF cpf, float salary);

        // Regular Methods
        float bonus() const;  
};