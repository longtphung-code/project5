#include <iostream>
#include <random>

using namespace std;

int main()
{
	//Create a random number generator
	random_device rd;
	mt19937 gen(rd());

	// Range 1 to 10
	uniform_int_distribution<> dis(1, 10);

	int secretNumber = dis(gen);
	int userGuess = 0;
	int count = 0;

	cout << "Welcome to the Number Guessing Game, I have seleceteda  number between 1 and 10. Can you guess it?" << endl;

	// Loop until the user guesses the number
	while (userGuess != secretNumber)
	{
		cout << "Enter your guess: ";
		cin >> userGuess;

		count++;

		if (userGuess < secretNumber)
		{
			cout << "Too low! Try again." << endl;
		}
		else if (userGuess > secretNumber)
		{
			cout << "Too high! Try again." << endl;
		}
		else
		{
			cout << "Congratulations! You guessed the number in " << count << " attempts!" << endl;
		}
	}
}