// Name: Vladyslav Sharapov
// login: c00325055
// Date: 26/11/25
// Approximate time taken: 10 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q17: Programm Fixing
// ---------------------------------------------------------------------------
// Known Bugs: Bug with lowest number that was not showing, I fixed it by initializing switch(count) case 1
// ---------------------------------------------------------------------------
// Test data 1: quantityNum: 5, numbers: 3, 7, 1, 10, 5 -> lowest: 1, highest: 10, sum: 26, average: 5.2
// Test data 2: quantityNum: 3, numbers: 6, 2, 9 -> lowest: 2, highest: 9, sum: 17, average: 5.66667
// Test data 3: quantityNum: 4, numbers: 1, 1, 1, 1 -> lowest: 1, highest: 1, sum: 4, average: 1
// ---------------------------------------------------------------------------

#include <iostream>

int main17()
{
	int count = 1;
	double sum = 0;
	int numberGuess = -1;
	int quantityNum = 0;
	double average = 0;
	int lowestNum = 0;
	int highestNum = 0;

	std::cout << std::endl << "Enter the number of numbers you want: ";
	std::cin >> quantityNum;


	while (count <= quantityNum)
	{
		std::cout << std::endl << "Please enter a number (1-10) : ";
		std::cin >> numberGuess;

		if (numberGuess >= 1 || numberGuess <= 10)
		{
			switch (count)
			{
			case 1: // first iteration initialization
				lowestNum = numberGuess; // initialize lowest number
				highestNum = numberGuess; // initialize highest number
				sum = sum + numberGuess; // initialize sum

				break;

			default: // all other iterations
				if (numberGuess < lowestNum)
				{
					lowestNum = numberGuess;
				}

				if (numberGuess > highestNum)
				{
					highestNum = numberGuess;
				}

				sum = sum + numberGuess;
				break;
			}
			

		}
		count++;
	} // end while

	average = sum / quantityNum;  // calculate the average number

	std::cout << "The lowest of the numbers is " << lowestNum << std::endl;
	std::cout << "The highest of the numbers is " << highestNum << std::endl;
	std::cout << "The sum of the numbers is " << sum << std::endl;
	std::cout << "The average of the numbers is " << average << std::endl;

	system("Pause");
	return 0;
}
