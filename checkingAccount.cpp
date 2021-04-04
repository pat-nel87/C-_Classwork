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
checkingAccount::checkingAccount(double in, double sR, double min, string nm, int act, double bl)
                : bankAccount(nm, act, bl) {

    setName(nm);
    setAcctNumber(act);
    setBalance(bl);
    setInterest(in);
    setService(sR);
    setMinBalance(min);
};