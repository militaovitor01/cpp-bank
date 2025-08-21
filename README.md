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

### Account
Represents a bank account with:
- Account number
- Account holder (Holder class)
- Balance
- Methods for deposit and withdrawal operations
- Static counter for number of accounts

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
│   ├── Account.cpp
│   ├── CPF.cpp
│   ├── Employee.cpp
│   ├── Holder.cpp
│   └── Person.cpp
├── include/                  # Header files
│   ├── Account.hpp
│   ├── CPF.hpp
│   ├── Employee.hpp
│   ├── Holder.hpp
│   └── Person.hpp
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
- Implement different account types (checking, savings)
- Add authentication and security features
- Create a database connection for persistent storage
- Implement a user interface (CLI or GUI)

## License

[Specify your license here]
