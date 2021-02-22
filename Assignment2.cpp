// STUDENT: PATRICK NELSON
// ASSIGNMENT #: 2
// DUE: 2/16/21

#include <iostream>
#include <string>

using namespace std;

// declaration of globals
int aCount = 0;
int eCount = 0;
int iCount = 0;
int oCount = 0;
int uCount = 0;

void loVow(string test);

int main()
{

	string str1;
		
	cout << " Please enter a word: ";
	getline(cin, str1);		
	// cout << str1;
	loVow(str1);
	cout << " lowercase a appeared: " << aCount << endl;
	cout << " lowercase e appeared: " << eCount << endl;
	cout << " lowercase i appeared: " << iCount << endl;
	cout << " lowercase o appeared: " << oCount << endl;
	cout << " lowercase u appeared: " << uCount << endl;

}

//used scope resolution operator to make globals accessible in function
void loVow(string test) 
{
	int L = test.length();
	cout << test << endl;
	
	for (int i = 0; i < L; i++) 
	{	
		switch(test[i])
		 {
			case 'a':
				::aCount += 1;
				break;
			case 'e':
				::eCount += 1;
				break;
			case 'i':
				::iCount += 1;
				break;
			case 'o':
				::oCount += 1;
				break;
			case 'u': 
				::uCount += 1;
				break;	     			 
		}
		
	}
	
}
