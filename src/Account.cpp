#include "Account.hpp"

using namespace::std;

void Account::printAccount()const{
    cout << "id: #" << id << endl;
    cout << "Баланс: " << balance << endl;
    cout << "Имя: " << user_name << endl;
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