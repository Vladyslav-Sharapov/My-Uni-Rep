// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 24/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q12: Counting Occurrences of Highest and Lowest Numbers
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: // Input: 5, Numbers: 3, 7, 2, 7, 1 // Expected Output: Lowest: 1 (1 time), Highest: 7 (2 times)
// Test Data 2: // Input: 4, Numbers: 5, 5, 5, 5 // Expected Output: Lowest: 5 (4 times), Highest: 5 (4 times)
// Test Data 3: // Input: 6, Numbers: 1, 2, 3, 4, 5, 6 // Expected Output: Lowest: 1 (1 time), Highest: 6 (1 time)
// Test Data 4: // Input: 3, Numbers: 10, 9, 8 // Expected Output: Lowest: 8 (1 time), Highest: 10 (1 time)
// Test Data 5: // Input: 7, Numbers: 2, 4, 6, 4, 2, 6, 4 // Expected Output: Lowest: 2 (2 times), Highest: 6 (2 times)
// ---------------------------------------------------------------------------

#include <iostream>

void countOccurences();

int main12()
{
	countOccurences();

	system("pause");
	return 0;
}

void countOccurences() // Function to count occurrences of numbers
{
	int num = 0; // User input number
	int numInputs = 0; // Number of inputs
	int highestNum = 0; // Highest number entered
	int lowestNum = 0; // Lowest number entered
	int countLowestNum = 0; // Count of lowest number occurrences
	int countHighestNum = 0; // Count of highest number occurrences

	std::cout << "How many numbers do you wish to enter? " << std::endl;
	std::cin >> numInputs;

	for (int i = 1; i <= numInputs;) // Loop to get user inputs
	{
		std::cout << "Enter a number (1-10)\n";
		std::cout << "Number " << i << ": ";
		std::cin >> num;

		while (num < 1 || num > 10) // Input validation
		{
			std::cout << "Invalid input. Please enter a number between 1 and 10: ";
			std::cout << "Number " << i << ": ";
			std::cin >> num;
		}

		switch (i)
		{
		case 1:
			highestNum = num;
			lowestNum = num;
			countHighestNum = 1;
			countLowestNum = 1;
			break;

		default:
			if (num > highestNum) // If new highest number found
			{
				highestNum = num; // Update highest number
				countHighestNum = 1; // Reset count
			}
			else if (num == highestNum) // If equal to highest number
			{
				countHighestNum++; // Increment count
			}

			if (num < lowestNum) // If new lowest number found
			{
				lowestNum = num; // Update lowest number
				countLowestNum = 1; // Reset count
			}
			else if (num == lowestNum) // If equal to lowest number
			{
				countLowestNum++; // Increment count
			}
			break;
		}

		i++;

	}

	std::cout << "# Final lowest number entered: " << lowestNum << std::endl;
	std::cout << "# Lowest number was entered: " << countLowestNum << " time(s)" << std::endl;
	std::cout << "# Final highest number entered: " << highestNum << std::endl;
	std::cout << "# Highest number was entered: " << countHighestNum << " time(s)" << std::endl;
	std::cout << "######################################### " << std::endl;

}