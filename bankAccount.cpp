//
// Created by Patrick on 4/4/2021.
//
#include "bankAccount.h"

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void bankAccount::setName(string nm)
{
    name = nm;
}

string bankAccount::getName()
{
    return name;
}

void bankAccount::setAcctNumber(int num)
{
    accountNumber = num;
}

int bankAccount::getAcctNumber()
{
    return accountNumber;
}

void bankAccount::setBalance(double sum)
{
    balance = sum;
}

double bankAccount::getBalance()
{
    return balance;
}

void bankAccount::deposit(double depo)
{
    balance = balance + depo;
}

void bankAccount::withdraw(double draw)
{

    balance = balance - draw;
}

void bankAccount::print()
{
    cout << "Name: " << getName() << endl;
    cout << "Account Number: " << getAcctNumber() << endl;
    cout << "Account Balance: " << getBalance() << endl;

}

bankAccount::bankAccount(string nm, int act, double bal)
{
    setName(nm);
    setAcctNumber(act);
    setBalance(bal);
}