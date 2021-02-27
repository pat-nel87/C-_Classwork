// STUDENT: PATRICK NELSON
// ASSIGNMENT #: 3
// DUE: 3/02/21


#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h> //included to modify default terminal background color!


using namespace std;

void dataCollect();
void pollResult(string names[], string win, double vtot[]);


int main()
{
	
	system("Color 0A"); // Makes background black & text monochrome green!	
	
	dataCollect();
	
	return 0;
}

void dataCollect() {
	
	string last_name[5];
	double votes[5];
	double max = votes[0];
	string winner;
	
	for (int i=0; i < 5; i++)
{
		cout << "Enter Candidate " << i + 1 << "'s last name " << " ";
		getline(cin, last_name[i]);				
}
	for (int j=0; j < 5; j++)
{
		cout << "Enter Candidate " << j + 1 << "'s total votes" << " ";
		cin >> votes[j];
		if (max < votes[j]) //finds the winner while collecting votes, more effecient?
	{
			max = votes[j];
			winner = last_name[j];
	}
}
		
	pollResult(last_name, winner, votes);
	
}


void pollResult(string names[], string win, double vtot[])
{
	
	double total;
	double percent;
	for(int h=0; h < 5; h++)
{
	total = total + vtot[h];
}	
	
	cout << "CANDIDATE	" << "Votes Received	" << "Percent of Total Votes" << "\n";
	for (int k=0; k < 5; k++)
{
	percent = (vtot[k] / total);
	percent = percent * 100;
	cout << names[k] << "		" << vtot[k] << "		" << percent << "%" << " \n";

}

 cout << "\n" << "Total Votes: " << total << endl;
 cout << "\n" << "The Winner of the election is: " << win << endl;
}

