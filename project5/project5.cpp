#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() 
{
    ifstream inputFile;

    string fileName;
    string name;
    string firstName;
    string lastName;

    int count = 0;

	// Prompt user for file name
    cout << "Enter the file name: ";
    cin >> fileName;

    // Open file
	cout << "Opening file: " << fileName << endl;
    inputFile.open(fileName);

    // Check if file opened successfully
    if (!inputFile)
    {
        cout << "Error: File could not be opened." << endl;
        return 1;
    }

    // Read first name (initialize tracking variables)
    if (inputFile >> name)
    {
        firstName = name;
        lastName = name;
        count = 1;
    }
    else
    {
        cout << "File is empty." << endl;
        return 1;
    }

    // Read remaining names until EOF
    while (inputFile >> name) {

        count++;

        // Check for alphabetically smallest (first)
        if (name < firstName) {
            firstName = name;
        }

        // Check for alphabetically largest (last)
        if (name > lastName) {
            lastName = name;
        }
    }

    // Output results
    cout << "Number of students: " << count << endl;
    cout << "First student in line: " << firstName << endl;
    cout << "Last student in line: " << lastName << endl;

    // Close file
    inputFile.close();

    return 0;
}