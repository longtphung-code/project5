#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main()
{
	ifstream inputFile;

	string fileName;
	string townName;

	int population;
	int year = 1900;

	// Ask user for town name
	cout << "Enter the town name: ";
	getline(cin, townName);

	// Ask user for file name
	cout << "Enter the file name: ";
	cin >> fileName;

	//open the file
	inputFile.open(fileName);

	//Validate file opening 
	if (!inputFile)
	{
		cout << "Error: File could not be opened." << endl;
		return 1; // Exit with error code
	}

	//Display Chart heading
	cout << endl;
	cout << "\n" << townName << " Population Growth " << endl;
	cout << "(each * represents 1,000 people)" << endl;

	//Read population data from file and display chart
	while (inputFile >> population)
	{
		//Display Year
		cout << year << " ";

		//Display bar chart
		for (int count = 0; count < population / 1000; count++)
		{
			cout << "*";

		}
		cout << endl;

		// Increase year by 20
		year += 20;
	}
	//Close the file
	inputFile.close();

	return 0;
}