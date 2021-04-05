//
// Created by Patrick on 4/4/2021.
//

#ifndef ATTEMPT2_CHECKINGACCOUNT_H
#define ATTEMPT2_CHECKINGACCOUNT_H
#include "bankAccount.h"

class checkingAccount: public bankAccount {
    private:
        double interest;
        double serviceRate;
        double minBalance;

    public:

    void setMinBalance(double);
    double getMinBalance();
    void setInterest(double);
    double getInterest();
    void setService(double);
    double getService();
    void print();
    void withdraw(double);
    void balCheck(double, double);
    checkingAccount(double, double, double, string, int, double);



};


#endif //ATTEMPT2_CHECKINGACCOUNT_H
