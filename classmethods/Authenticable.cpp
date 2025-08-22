#include "../include/Authenticable.hpp"
#include <iostream>

Authenticable::Authenticable(std::string password)
    : password(password){

}

bool Authenticable::authenticationPermition(std::string password) const {
    if(password == this->password) return true;
    else return false;
}

void Authenticable::login(std::string password) {
    if(authenticationPermition(password)){
        std::cout << "You're sucessfull logged in" << std::endl;
    }else{
        std::cout << "The passwords don't match" << std::endl;
    }
}