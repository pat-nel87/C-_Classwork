// tests if lengths make a triangle and returns type
// for a lesson on user defined enumeration types


#include <iostream>
#include <iomanip>

using namespace std;

enum triangleType {scalene, isosceles, equilateral,noTriangle};

triangleType triangleShape(int x, int y, int z);

int main() {
    int a;
    int b;
    int c;
    triangleType final;
    cout << "Please Enter 3 Lengths: " << endl;
    cin >> a >> b >> c;
    
	final = triangleShape(a, b, c);
	switch(final)
	{
		case scalene:
			cout << "scalene" << endl;
			break;
		case isosceles:
			cout << "isosceles" << endl;
			break;
		case equilateral:
			cout << "equilateral" << endl;
			break;
		case noTriangle:
			cout << "noTriangle" << endl;
			break;
		}

    return 0;
}

triangleType triangleShape(int x, int y, int z) {
  triangleType result;
  if (x + y < z) 
    return result = noTriangle;
  
  else if (x != y && y != z && z !=x) 
    return result = scalene;

  else if ((x == y && y != z) || (y == z && y != x))		
  	return result = isosceles;

  else 
  	return result = equilateral; 	
  
}
