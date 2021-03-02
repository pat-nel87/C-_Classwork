#include <iostream>

using namespace std;

struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main() {
    
	computerType comp1;
    
    cout << " Enter the name of the Manufacturer: ";
    getline(cin, comp1.manufacturer);
    cout << "\n" << " Enter the model of the computer: ";
    getline(cin, comp1.modelType);
    cout << "\n" << " Enter the processor type: ";
    getline(cin, comp1.processorType);
    cout << "\n" << " Enter the size of RAM(in GB): ";
    cin >> comp1.ram;
    cout << "\n" << " Enter the size of the hard drive(in GB): ";
    cin >> comp1.hardDriveSize;
	cout << "\n" << " Enter the year the computer was built: ";
    cin >> comp1.yearBuilt;
    cout << "\n" << " Enter the price: ";
    cin >> comp1.price;
    
    cout << "\n" << " Manufacturer: " <<  comp1.manufacturer;
    cout << "\n" << " Model: " << comp1.modelType;
    cout << "\n" << " Processor: " << comp1.processorType;
	cout << "\n" << " Ram: " << comp1.ram;
    cout << "\n" <<	" Hard Drive Size: " << comp1.hardDriveSize;
    cout << "\n" << " Year Built: " << comp1.yearBuilt;
	cout << "\n" << " Price: " << comp1.price;
		

	return 0;
}
