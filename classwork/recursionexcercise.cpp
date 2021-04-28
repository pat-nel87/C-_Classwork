#include <iostream>

using namespace std;

int starRec(int num, int storage);
int invert(int num2, int start);


int main()
{
    int prompt;
    cout << "Please enter the number to generate pattern: ";
    cin >> prompt;
    starRec(prompt, prompt);
    return 0;
}

int starRec(int num, int storage)
{
    if (num == 0)
    {
        return invert(num, storage);
    }
    int temp = num;
    while(temp != 0)
    {
        cout << "*";
        temp--;
    }
    cout << endl;
    num--;
    return starRec(num, storage);

}

int invert(int num2, int start)
{
   // cout << num2 << "" << start << endl;
    if (num2 == start)
    {
        return num2;
    }

    int temp2 = num2 + 1;
    while (temp2 != 0)
    {
        cout << "*";
        temp2--;
    }
    num2++;
    cout << endl;
    return invert(num2, start);
}
