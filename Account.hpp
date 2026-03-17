#pragma once

#include <string>
#include <iostream>

using namespace::std;

class Account{
private:
    const int id;
    long double balance;
    string user_name;
public:
    Account():id(0), balance(0), user_name(" ") {}
    Account(int new_id, long double new_balance, string new_user_name)
    :id(new_id), balance(new_balance), user_name(new_user_name){}
    virtual ~Account(){
        cout<<"Счёт #"<< id << "удалён из системы" << endl;
    }

    int getID() const {return id;}
    long double getBalance() const {return balance;}
    string getUser_name() const {return user_name;}
    void setBalance(long double new_balance){
        balance = new_balance;
    }

    void printAccount()const;
    bool deposit(long double amount);
    bool withdraw(long double payment);
};