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

### Holder
Extends the Person class to represent a bank account holder.

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

## Usage Example

```cpp
// Create a holder
Holder holder("John Doe", CPF("John Doe", "123.456.789-00", "01-01-1990"));

// Create an account
Account account("1234", holder);

// Deposit money
account.depositAmount(1000.0);

// Withdraw money
account.withdrawAmount(500.0);

// Check balance
std::cout << "Current balance: " << account.getBalance() << std::endl;
```

## Project Structure

```
.
├── main.cpp                  # Main entry point
├── classmethods/             # Class implementations
│   ├── Account.cpp           # Base account functionality
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