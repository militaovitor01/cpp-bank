#include "Employee.hpp"

class BankManager final : public Employee {
    private:
        /* data */
    public:
        // Constructor
        BankManager(std::string name, CPF cpf, float salary);

        // Regular Methods
        float bonus() const;  
};