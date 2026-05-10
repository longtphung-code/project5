#include <iostream>
using namespace std;

int main()
{
	int rows = 10;

	//Pattern A (1-30)
	for (int i = 1; i <= rows; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "+";
		}
		cout << endl;
	}

	cout << endl;
	//Pattern B (10-1)
	for (int i = rows; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "+";
		}
		cout << endl;
	}

	return 0;
}