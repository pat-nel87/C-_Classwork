#include <iostream>
#include <cstring> 
#include <cctype> 
  
using namespace std;

int main()
{
    char str[81];
    char *dStr = new char[81];
    int len;

    int i;
    cout << "Enter Length:" << endl;
    cin >> len;
    cout << "Enter a string: " << endl;
    cin >> str;
    strcpy(dStr, str);
    cout << endl;
    cout << "String in upper case letters is:" << endl;

    len = strlen(dStr);
    for (i = 0; i < len; i++)
        cout << static_cast<char>(toupper(dStr[i]));
    cout << endl;

    return 0;
}
