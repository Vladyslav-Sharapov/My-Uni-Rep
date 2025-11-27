// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 26/11/25
// Approximate time taken: 5 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q15: Sum of 10 even random numbers
// ---------------------------------------------------------------------------
// Known Bugs: line 30 in if statement had 'checkEven = 0' instead of 'checkEven == 0'
// ---------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main15()
{
	int step = 1;
	int checkEven = 0;
	int sum = 0;

	srand(time(nullptr));  // set the random number seed

	while (step <= 10)
	{
		int numberGuess = (rand() % 100) + 1;  // Generates a random no

		checkEven = numberGuess % 2; // check for an even number

		if (checkEven == 0) // if even
		{
			cout << " " << numberGuess;
			sum = sum + numberGuess;
			step++;
		}// END IF

	} // end while

	cout << endl;
	cout << "The sum of even numbers is " << sum << endl;
	system("Pause");
	return 0;
}
