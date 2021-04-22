#include <iostream>
#include <string>
#include "valueViolation.h"
#include <iomanip>

using namespace std;

double convert(double, double);

int main() {
    double feet;
    double inches;
    double centimeter;
    bool done = false;

    cout << fixed << showpoint << setprecision(2);
    do
   {

        try {

            cout << "Please enter a length, Feet first: " << endl;
            cin >> feet;
            cout << endl << "Please enter corresponding inches: " << endl;
            cin >> inches;

            if (feet < 0 || inches < 0) {
                throw valueViolation();
            }
            if (!cin) {
                throw valueViolation("A non numerical value has been detected");
            }

            centimeter = convert(feet, inches);
            cout << centimeter << endl;
            done = true;
        }
        catch (valueViolation violationObj) {
            cout << "An exception has been found "
                 << endl << violationObj.what() << endl;
            cin.clear();
            cin.ignore(100, '\n');
        }
   }
    while(!done);

    return 0;
}

double convert(double num1, double num2)
{
    double total;
    num1 = num1 * 12;
    num2 = num2 + num1;
    total = num2 * 2.54;

    return total;
}