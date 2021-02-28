#include <iostream>
#include <iomanip>

using namespace std;

void selectionSort(int list[], int length)
{
	int index;
	int smallestIndex;
	int location;
	int temp;
	
	for (index =0; index < length -1; index++)
	{
		// Step1 
		smallestIndex = index;
		
		for (location = index + 1; location < length; location++)
			if (list[location] < list[smallestIndex])
				smallestIndex = location;
		
		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;
	}
}

int main() 
{
	int list[] = {2,54,56,76,34,12,89,76,233,1};
	selectionSort(list, 10);
	
	cout << "After running selectionSort" << endl;
	
	for (int i = 0; i < 10; i++)
		cout << list[i] << " ";
	cout << endl;
	
	return 0;
}

