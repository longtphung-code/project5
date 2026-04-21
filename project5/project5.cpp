#include <iostream>
using namespace std;

int main() {

	int startingPopulation;
	double dailyIncrease;
	int days;

	// Input: starting population
	cout << "Enter starting population(>= 2): ";
	cin >> startingPopulation;
	
	// Validation
	if (startingPopulation < 2) {
		cout << "Error: Starting population must be at least 2." << endl;
		return 0;
	}
	
	// Input, daily increase percentage
	cout << "Enter average daily increase ( percentage > 0): ";
	cin >> dailyIncrease;

	// validation
	if (dailyIncrease <= 0) {
		cout << "Error: Daily increase must be greater than 0." << endl;
		return 0;

	}

	//Input: number of days
	cout << "Enter number of days (>= 1): ";
	cin >> days;

	// Validation 
	if (days < 1) {
		cout << "Error: Number of days must be at least 1." << endl;
		return 0;
	}
	
	//Convert percentage to decimal	
	double rate = dailyIncrease / 100.0;

	// Display header
	cout << "/nDay/tPopulation" << endl;
	cout << "-------------------------" << endl;

	double population = startingPopulation;
	
	//loop: simulate population growth
	for (int day = 1; day <= days; ++day) {
		cout << day << "\t" << (population) << endl;
		population += population * rate; // Update population
	

	}

	return 0;
}