// STUDENT: PATRICK NELSON
// ASSIGNMENT #: 3
// DUE: 3/02/21

// working rough draft..

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void pollResult(string names[], int vtot[]);

int main() {
		
	string last_name[5];
	int votes[5];
	
	
	for (int i=0; i < 5; i++) {
		cout << "Enter Candidate " << i + 1 << "'s last name " << " ";
		getline(cin, last_name[i]);				
	}
	for (int j=0; j < 5; j++) {
		cout << "Enter Candidate " << j + 1 << "'s total votes" << " ";
		cin >> votes[j];
	}
	
	pollResult(last_name, votes);
	
	return 0;
}

void pollResult(string names[], int vtot[]) {
	
	int total;
	float percent;
	
	cout << "CANDIDATE		" << "Votes Received		" << "Percent of Total Votes" << "\n";
	for (int k=0; k < 5; k++)
{
	cout << names[k] << "		" << vtot[k] << "		" << " \n";



}




}

