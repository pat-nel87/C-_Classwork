// To speed up physics homework, resolves a vector to scalars
//

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void vecScalar(double x, double y);

double xScalar;
double yScalar;

int main() 
{

	double mag;
	double theta;
	
	cout << "Enter magnitude: " << endl;
	cin >> mag; 
	cout << "Enter direction angle: " << endl;
	cin >> theta;
	
	vecScalar(mag, theta);	
	cout << "X coordinate: " << ::xScalar << "\n" << endl;
	cout << "Y coordinate: " << ::yScalar << "\n" << endl;	
	
	
	return 0;
}

void vecScalar(double x, double y) 
{
	
	double PI = 3.14159;
	  
	::xScalar = ((x) * cos(y * PI / 180.0));
	::yScalar = ((x) * sin(y * PI / 180.0));
	
		
}
