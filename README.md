# C++ Banking System

A simple banking system implemented in C++ that models real-world banking operations through object-oriented programming concepts. This project demonstrates inheritance, encapsulation, and class relationships in C++.

## Project Overview

This project implements a basic banking system with the following entities:
- Person (base class for common personal information)
- Account (banking account with operations)
- Holder (account holder derived from Person)
- Employee (bank employee derived from Person)
- CPF (Brazilian individual taxpayer registry class)

## Class Structure

### Person
Base class containing common attributes for people in the system:
- Name
- CPF (Brazilian individual taxpayer registry)

### Authenticable
A class for handling authentication:
- Stores passwords
- Validates login attempts
- Used by both employees and account holders for system access

### Holder
Extends the Person class to represent a bank account holder:
- Stores authentication information
- Inherits name and CPF from Person

### Employee
Extends the Person class to represent a bank employee:
- Has salary information
- Inherits name and CPF from Person

### BankTeller
Extends the Employee class to represent a bank teller:
- Implements bonus calculation
- Inherits salary, name, and CPF from Employee

### BankManager
Extends the Employee class to represent a bank manager:
- Implements bonus calculation
- Inherits salary, name, and CPF from Employee
- May have authentication privileges

### Account
Represents a bank account with:
- Account number
- Account holder (Holder class)
- Balance
- Methods for deposit and withdrawal operations
- Static counter for number of accounts
- Virtual method for withdrawal tax calculation
- Methods for transferring balances between accounts

### CurrentAccount
Extends the Account class to represent a checking account:
- Implements specific withdrawal tax policy
- Inherits all account operations from Account class

### SavingsAccount
Extends the Account class to represent a savings account:
- Implements specific withdrawal tax policy
- Inherits all account operations from Account class

### CPF
Contains Brazilian taxpayer identification information:
- Name
- CPF number
- Birth date
- Methods to verify CPF number pattern

## Key Features

- **Object-Oriented Design**: Uses inheritance, encapsulation, and polymorphism
- **Data Validation**: Validates names and potentially other input data
- **Banking Operations**: Supports deposit and withdrawal with appropriate validation
- **Account Management**: Tracks number of accounts in the system

## How to Build

The project uses a standard C++ compiler (g++). To compile the project:

```bash
g++ main.cpp classmethods/*.cpp -Iinclude -o output/main.exe && output\main.exe
```

## Usage Examples

### Creating Account Holders and Accounts

```cpp
// Create a CPF object with personal information
CPF clientCPF("John Doe", "123.456.789-00", "01-01-1990");

// Create a holder with name, CPF, and password for authentication
Holder holder("John Doe", clientCPF, "securePassword123");

// Create a current account (checking account)
CurrentAccount currentAccount("1234-5", holder);

// Create a savings account
SavingsAccount savingsAccount("6789-0", holder);

// Deposit money in both accounts
currentAccount.depositAmount(1000.0);
savingsAccount.depositAmount(5000.0);

// Withdraw money (with different tax rates applied)
currentAccount.withdrawAmount(500.0);  // Higher withdrawal fee
savingsAccount.withdrawAmount(500.0);  // Lower or no withdrawal fee

// Transfer money between accounts
currentAccount.transferBalanceToAnotherAccount(savingsAccount, 200.0);

// Check balances
std::cout << "Current account balance: " << currentAccount.getBalance() << std::endl;
std::cout << "Savings account balance: " << savingsAccount.getBalance() << std::endl;
```

### Working with Bank Employees

```cpp
// Create a CPF for employees
CPF employeeCPF1("Jane Smith", "987.654.321-00", "15-05-1985");
CPF employeeCPF2("Robert Johnson", "567.890.123-45", "22-08-1978");

// Create bank employees with different roles
BankTeller teller("Jane Smith", employeeCPF1, 3000.0, "tellerPass123");
BankManager manager("Robert Johnson", employeeCPF2, 7000.0, "managerPass456");

// Calculate and display bonuses
float tellerBonus = teller.bonus();
float managerBonus = manager.bonus();

std::cout << "Bank teller " << teller.getName() << " receives a bonus of: " << tellerBonus << std::endl;
std::cout << "Bank manager " << manager.getName() << " receives a bonus of: " << managerBonus << std::endl;

// Authentication example
if (manager.authenticationPermition("managerPass456")) {
    std::cout << "Manager successfully authenticated" << std::endl;
    // Perform manager-specific operations
}
```

### Complete System Example

```cpp
#include <iostream>
#include "include/Account.hpp"
#include "include/Holder.hpp"
#include "include/Employee.hpp"
#include "include/CPF.hpp"
#include "include/Person.hpp"
#include "include/CurrentAccount.hpp"
#include "include/SavingsAccount.hpp"
#include "include/BankManager.hpp"
#include "include/BankTeller.hpp"

int main() {
    // Create a holder and accounts
    Holder holder("Vitor", CPF("Vitor", "102.823.216-08", "24-04-2005"), "senha1234");
    CurrentAccount currentAccount("1234", holder);
    SavingsAccount savingsAccount("5678", holder);
    
    // Set initial balance and perform operations
    currentAccount.depositAmount(1500.0);
    savingsAccount.depositAmount(5000.0);
    
    currentAccount.withdrawAmount(300.0);  // Will apply current account withdrawal tax
    savingsAccount.withdrawAmount(500.0);  // Will apply savings account withdrawal tax
    
    // Display client information
    std::cout << "Client data: " << std::endl 
              << "Account number: " << currentAccount.getNumber() << std::endl
              << "Holder name: " << holder.getName() << std::endl 
              << "Current account balance: " << currentAccount.getBalance() << std::endl
              << "Savings account balance: " << savingsAccount.getBalance() << std::endl;

    // Create bank employees
    BankManager manager("Carlos", CPF("Carlos", "987.654.321-00", "15-06-1980"), 20000, "managerPass");
    BankTeller teller("Ana", CPF("Ana", "123.456.789-00", "10-10-1995"), 5000, "tellerPass");
    
    // Display employee information
    std::cout << "Bank staff: " << std::endl
              << "Manager: " << manager.getName() << ", Salary: " << manager.getSalary() 
              << ", Bonus: " << manager.bonus() << std::endl
              << "Teller: " << teller.getName() << ", Salary: " << teller.getSalary() 
              << ", Bonus: " << teller.bonus() << std::endl;
    
    return 0;
}
```

## Project Structure

```
.
├── main.cpp                  # Main entry point
├── classmethods/             # Class implementations
│   ├── Account.cpp           # Base account functionality
│   ├── Authenticable.cpp     # Authentication functionality
│   ├── BankManager.cpp       # Bank manager employee implementation
│   ├── BankTeller.cpp        # Bank teller employee implementation
│   ├── CPF.cpp               # Brazilian taxpayer ID implementation
│   ├── CurrentAccount.cpp    # Current account implementation
│   ├── Employee.cpp          # Base employee functionality
│   ├── Holder.cpp            # Account holder implementation
│   ├── Person.cpp            # Base person class implementation
│   └── SavingsAccount.cpp    # Savings account implementation
├── include/                  # Header files
│   ├── Account.hpp           # Base account with deposit/withdrawal methods
│   ├── Authenticable.hpp     # Authentication interface
│   ├── bankManager.hpp       # Bank manager with bonus calculation
│   ├── bankTeller.hpp        # Bank teller with bonus calculation
│   ├── CPF.hpp               # CPF validation and storage
│   ├── CurrentAccount.hpp    # Current account with specific withdrawal tax
│   ├── Employee.hpp          # Employee with salary information
│   ├── Holder.hpp            # Account holder information
│   ├── Person.hpp            # Base person with name and CPF
│   └── SavingsAccount.hpp    # Savings account with specific withdrawal tax
└── output/                   # Compiled binaries
    └── main.exe
```

## Design Principles

- **Encapsulation**: Private members with getter and setter methods
- **Inheritance**: Person as base class for Employee and Holder
- **Validation**: Input validation for critical data
- **Memory Management**: Proper constructor and destructor implementation

## Future Improvements

Potential enhancements for the project:
- Add transaction history for accounts
- Add interest calculation for savings accounts
- Implement account fees and maintenance charges
- Add authentication and security features
- Create a database connection for persistent storage
- Implement a user interface (CLI or GUI)