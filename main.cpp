#include <iostream>
#include <string>
#include "include/Account.hpp"
#include "include/Holder.hpp"
#include "include/Employee.hpp"

using namespace std;

int main()
{   
    Holder holder("Vitor", CPF("Vitor", "102.823.216-08", "24-04-2005"));
    Account newAccount("1234", holder);
    newAccount.setBalance(1.500);

    cout << "Client data: " << endl 
    << "Account number: " << newAccount.getNumber() << endl
    << "Holder name: " << holder.getName() << endl 
    << "Holder balace: " << newAccount.getBalance() << endl;

    Employee newEmployee(CPF("Vitor", "102.823.216-08", "24/04/05"), 20.000);
    return 0;
}