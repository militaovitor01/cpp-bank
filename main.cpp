#include <iostream>
#include <string>
#include "include/Account.hpp"
#include "include/Holder.hpp"
#include "include/Employee.hpp"
#include "include/CPF.hpp"
#include "include/Person.hpp"
#include "include/CurrentAccount.hpp"
#include "include/SavingsAccount.hpp"
#include "include/BankManager.hpp"
#include "include/BankTeller.hpp"

using namespace std;

int main()
{   
    Holder holder("Vitor", CPF("Vitor", "102.823.216-08", "24-04-2005"));
    CurrentAccount currentAccount("1234", holder);
    currentAccount.setBalance(1.500);

    cout << "Client data: " << endl 
    << "Account number: " << currentAccount.getNumber() << endl
    << "Holder name: " << holder.getName() << endl 
    << "Holder balace: " << currentAccount.getBalance() << endl;

    cout << "----------------------" << endl;

    BankManager newEmployee("Vitor", CPF("Vitor","102.823.216-08", "24/04/05"), 20000);
    cout << "Employee data: " << endl
    << "Employee name: " << newEmployee.getName() << endl 
    << "Employee Salary: " << newEmployee.getSalary() << endl;
    return 0;
}