// STUDENT: PATRICK NELSON
// ASSIGNMENT #: 1
// DUE: 2/2/21

#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int main()
{	
	int num1;
	int num2;
	char oper;
	
	cout << "Enter First Value: ";
	cin >> num1;
	
	cout << "\nEnter Second Value: ";
	cin >> num2;
	
	cout << "\nEnter Arithmetic operator: ";
	cin >> oper;
	
	cout << "\n"; // to make space before result
	
	
	// I liked the idea of using a switch structure
	// I also tried to display the result without
	// using an extra variable 

	switch (oper)
	{
		case '+':
			printf("%d + %d = %d", num1, num2, (num1+num2));
			break;
		
		case '-':
			printf("%d - %d = %d", num1, num2, (num1-num2));
			break;
		
		case '*':
			printf("%d * %d = %d", num1, num2, (num1*num2));
			break;
		
		case '/':
			if (num2 == 0)
			{
				cout << "Division by Zero is Undefined!";
				break;
			}
			else
			{
				printf("%d / %d = %d", num1, num2, (num1/num2));
				break;
			}
		
		case '%':
			if (num2 == 0)
			{
				cout << "Division by Zero is Undefined!";
				break;
			}
			else {
				printf("%d % %d = %d", num1, num2, (num1%num2));
				break;
			}
		
	}
	cout << "\n";
	
return 0;	
}
