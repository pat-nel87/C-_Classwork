//
// Created by Patrick on 4/4/2021.
//

#include "checkingAccount.h"
#include <string>
#include <iostream>

void checkingAccount::print()  {
    bankAccount::print();
    cout << "Interest Rate: " << interest << endl;
    cout << "Service Rate: " << serviceRate << endl;
    cout << "Minimum Balance: " << minBalance << endl;

}

void checkingAccount::withdraw(double amt) {
    bankAccount::withdraw(amt);
    balCheck(getBalance(), getService());
}

void checkingAccount::setMinBalance(double m) {
    minBalance = m;
}

double checkingAccount::getMinBalance() {
    return minBalance;
}

void checkingAccount::setInterest(double i) {
    interest = i;
}
double checkingAccount::getInterest() {
    return interest;
}

void checkingAccount::setService(double s) {
    serviceRate = s;
}

double checkingAccount::getService() {
    return serviceRate;
}

void checkingAccount::balCheck(double num1 ,double num2)
{
    if (num1 < num2)
    {
        cout << "Your balance is below the minimum requirement" << endl
             << " You will be charged a service fee" << endl;
        double rate = getService();
        setBalance(num1 - rate);
        cout << "New Balance is: " << getBalance() << endl;
    }
    else {
        cout << endl << "** Account Balance currently meets minimum requirements" << endl;
    }
}

checkingAccount::checkingAccount(double in, double sR, double min, string nm, int act, double bl)
                : bankAccount(nm, act, bl) {

        setName(nm);
        setAcctNumber(act);
    if (bl < min)
    {
        cout << "Your initial deposit does not meet the minimum balance requirements" << endl;
        cout << "Please enter an amount above: " << min << endl;
        cout << "Enter new initial deposit amount: ";
        cin >> bl;

    }
        setBalance(bl);
        setInterest(in);
        setService(sR);
        setMinBalance(min);
};