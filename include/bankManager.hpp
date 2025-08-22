#include "Employee.hpp"
#include "Authenticable.hpp"
class BankManager final : public Employee, Authenticable {
    private:
        /* data */
    public:
        // Constructor
        BankManager(std::string name, CPF cpf, float salary, std::string password);

        // Regular Methods
        float bonus() const;  
};