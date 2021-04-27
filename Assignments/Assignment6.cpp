


#include <iostream>

using namespace std;


int sumSquares(int num, int sum);

int main() {
    int num = 100;
    int sum = 0;
    sum = sumSquares(100, 0);

    cout << "Total Sum is " << sum << endl;

    return 0;
}

int sumSquares(int num, int sum)
{
    if (num == 0)
    {
        return sum;
    }

        cout << "Pre-Calculation Sum is: " << sum << endl;
        cout << "Pre-Decrement Num is: " << num << endl;
        sum = (num * num) + sum;
        num--;
        cout << " Num is now: " << num << endl;
        sumSquares(num,  sum);

}
