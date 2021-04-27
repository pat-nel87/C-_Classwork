#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	
	string num[10][10][10];
	
	for(int i = 0; i < 10; i++)
{
	
		num[i][i][i] = "Test";
		cout << num[i][i][i] << "   " << i  << endl;
}
	
	
	
	
	
	
	return 0;
}
