#include "Account.hpp"

void Account::printAccount()const{
    std::cout << "id: #" << id << std::endl;
    std::cout << "Баланс: " << balance << std::endl;
    std::cout << "Имя: " << user_name << std::endl;
}

bool Account::deposit(long double amount){
    if(amount >= 0){
        balance += amount;
        return 0;
    }
    else {return 1;}
    
}

bool Account::withdraw(long double payment){
    if(payment <= balance && payment >= 0){
    balance -= payment;
    return 0;
    }
    else {return 1;}
}