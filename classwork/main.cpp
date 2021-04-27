#include <iostream>
#include "dateType.h"

using namespace std;

int main()
{
    
    dateType test(15, 20, 2008);
    test.printDate();
    bool leap = test.isLeapYear();
    if (leap == true)
      cout << endl << "this is a leap year";
    
    
    
    return 0;
}
