#include "Account.hpp"

class SavingsAccount final : public Account {
private:
    /* data */
public:
    SavingsAccount(/* args */);

    // Regular Methods
    float withdrawTax() const override;
};
