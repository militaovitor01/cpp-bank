#include "Account.hpp"
#include <string>

class CurrentAccount final : public Account{
    public:
        // Constructor
        CurrentAccount(std::string number, Holder holder);

        float withdrawTax() const override;
};
