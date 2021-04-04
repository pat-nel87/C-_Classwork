//
// Created by Patrick on 4/4/2021.
//

#ifndef ATTEMPT2_BANKACCOUNT_H
#define ATTEMPT2_BANKACCOUNT_H
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class bankAccount {
    private:
        int accountNumber;
        double balance;
        string name;

    public:

        void setName(string);
        string getName();
        void setAcctNumber(int);
        int getAcctNumber();
        void setBalance(double);
        double getBalance();
        void deposit(double);
        void withdraw(double);
        void print();
        bankAccount(string nm, int act , double bl);
        /* {
            name = nm;
            accountNumber = act;
            balance = bl;

        } */

    };




#endif //ATTEMPT2_BANKACCOUNT_H
