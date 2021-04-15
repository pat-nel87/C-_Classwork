//
// Created by Patrick on 4/14/2021.
// experimenting with a while / switch structure to loop through a menu.
#include <iostream>
#include "complexType.h"
#include <windows.h>

using namespace std;

int main()
{
    system("Color 2");
    int choice = 1;
    int run = 0;
    while (choice != 0)
    {
        int option;
        if (run >= 1)
        {
            cout << "Welcome Back!" << endl;
        }
        else
        {
            cout << "Welcome to the imaginary number calculator!" << endl;
            run++;
        }

        cout << " Please select an operation " << endl;
        cout << " Press 1 for + " << endl;
        cout << " Press 2 for - " << endl;
        cout << " Press 3 for * " << endl;
        cout << " Press 4 to find conjugate " << endl;
        cout << " Press 5 for absolute value " << endl;
        cout << " Press 0 to quit" << endl;
        cout << " ---> ";
        cin >> option;
        cout << endl;

        switch(option)
        {
            case 0:
                cout << "Thank you for using the imaginary calculator! " << endl;
                choice = 0;
                break;

            case 1:
                {
                complexType temp1;
                complexType temp2;

                cout << "Enter real and imaginary of first number: ";
                cin >> temp1;
                cout << endl;

                cout << "Enter real and imaginary of second number: ";
                cin >> temp2;
                cout << endl;

                cout << temp1 + temp2 << endl;
                break;
                }

            case 2:
            {
                complexType temp1;
                complexType temp2;

                cout << "Enter real and imaginary of first number: ";
                cin >> temp1;
                cout << endl;

                cout << "Enter real and imaginary of second number: ";
                cin >> temp2;
                cout << endl;

                cout << temp1 - temp2 << endl;
                break;
            }

            case 3:
            {
                complexType temp1;
                complexType temp2;

                cout << "Enter real and imaginary of first number: ";
                cin >> temp1;
                cout << endl;

                cout << "Enter real and imaginary of second number: ";
                cin >> temp2;
                cout << endl;

                cout << temp1 * temp2 << endl;
                break;
            }

            case 4:
            {
                complexType temp1;

                cout << "Enter real and imaginary number: ";
                cin >> temp1;
                cout << endl;
                cout << ~temp1 << endl;

                break;
            }

            case 5:
            {
                complexType temp1;

                cout << "Enter real and imaginary number: ";
                cin >> temp1;
                cout << endl;
                cout << !temp1 << endl;

                break;
            }


        };




    }







    return 0;
}
