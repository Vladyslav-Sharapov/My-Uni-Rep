// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q8: Range Sum
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: // Input: Start: 3, End: 7 // Expected Output: Sum: 25
// Test Data 2: // Input: Start: 1, End: 5 // Expected Output: Sum: 15
// Test Data 3: // Input: Start: -2, End: 4 // Expected Output: Invalid input message
// ---------------------------------------------------------------------------

#include <iostream>

int addNumbers(int start, int end);

int main8()
{
	int startNum, endNum;
	bool validInput = false;

	while (!validInput) // Loop until valid input is received
	{
		std::cout << "Enter the start number: ";
		std::cin >> startNum;

		std::cout << "Enter the end number: ";
		std::cin >> endNum;

		if (startNum < endNum && startNum > 0) // Check for valid range
		{
			validInput = true;
			int sum = addNumbers(startNum, endNum); // Call function to calculate sum

			std::cout << "The sum of numbers from " << startNum << " to " << endNum << " is: " << sum << std::endl; // Display the result
		}
		else // Input validation
		{
			std::cout << "Invalid input. Please ensure that the start number is less than the end number and both are positive." << std::endl;
			validInput = false;
		}
	}


	system("pause");
	return 0;
}

int addNumbers(int start, int end) // Function to calculate the sum of numbers in the given range
{
	int sum = 0;

	std::cout << "Start number: " << start << "\n";

	for (int i = start; i <= end; i++) // Loop through the range and calculate the sum
	{
		std::cout << "Adding: " << i << std::endl;
		sum += i;
	}

	std::cout << "End number: " << end << "\n";

	return sum;
}