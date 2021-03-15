#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double sum;
	double arr1[5];
	cout << "Enter first number" << " ";
	cin >> arr1[0];
	cout << "\n";
	cout << "Enter second number" << " ";
	cin >> arr1[1];
	cout << "\n" << "Enter the third number" << " ";
	cin >> arr1[2];
	cout << "\n" << " Enter the fourth number" << " ";
	cin >> arr1[3];
	cout << "\n" << " Enter the fifth number" << " ";
	cin >> arr1[4];
	
	// cout << "\n" << arr1[0] << "\n " << arr1[1] << "\n " << arr1[2] << "\n " << arr1[3] << "\n " << arr1[4] << "\n "; 

	for (int i = 0; i < 5; i++)
	{
		sum = sum + arr1[i];

	}
	
	cout << "\n" << " The Sum cast to the nearest integer: " << static_cast<int>(sum);
	
	
	return 0;
}
