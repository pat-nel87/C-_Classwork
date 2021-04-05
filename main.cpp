#include <iostream>
#include <string>

#include "bankAccount.h"
#include "checkingAccount.h"

using namespace std;

int main()
{
    string cust = "Test bank customer 1";
    string cust2 = "Test bank customer 2";
    int atnum = 123;
    double bl = 50.0;
    double in = 2.2;
    double sr = 25.0;
    double mB = 200.0;

    bankAccount test1(cust, atnum, bl);

    cout << "Test bank account object created, initial balance:" << test1.getBalance() << endl;
    test1.print();
    cout << "\n" << " **********" << endl;
    cout << "Making a Withdrawal of 20 to first test account" << endl;
    test1.withdraw(20);
    cout << "Making a deposit of 15.00" << endl;
    test1.deposit(15.0);
    test1.print();
    cout << "***** Testing Checking Account Object" << endl;

    checkingAccount test2(in, sr, mB, cust2, atnum+1, bl+50);
    test2.print();
    cout << "** Withdrawing 50.00 **" << endl;
    test2.withdraw(50.00);
    cout << "** Depositing 25.00 **" << endl;
    test2.deposit(25.00);
    cout << "Checking Balance" << endl;
    test2.balCheck(test2.getBalance(), test2.getMinBalance());
    cout << endl;
    test2.print();

    return 0;
}
