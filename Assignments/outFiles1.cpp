// outputs a text file with a asterisk triangle 
// height is determined by user-input
#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	ofstream outFile;	
	int iter;
	
	cout << "Please enter desired number of iterations: ";
	cin >> iter;
	cout << endl;
	
	outFile.open("star_iteration.txt");
	
	for (int i = 0; i < iter; i++) {
		for (int j = 0; j < i; j++) {
			outFile << "*";	
		}
		outFile << "\n";
	}
		
	outFile.close();
	return 0;
}
