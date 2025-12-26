// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q7: Number Analysis
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: // Input: 3, 7, 10, 15 // Expected Output: Sum: 32, Largest: 15, Smallest: 7, Average: 10
// Test Data 2: // Input: 5, 5, 6, 14, 15, 12 // Expected Output: Sum: 52, Largest: 15, Smallest: 5, Average: 10
// ---------------------------------------------------------------------------

#include <iostream>

float calculationsNumbers(int t_count);

int main7()
{
	int count; // Number of inputs
	bool validInput = false;

	while (!validInput)
	{
		std::cout << "Enter how many numbers you want: ";
		std::cin >> count;

		if (count <= 0) // Validate input
		{
			std::cout << "Invalid input. Please enter a positive integer." << std::endl;
			validInput = false;
		}
		else
		{
			validInput = true;
		}
	}

	float average = calculationsNumbers(count);
	std::cout << "Average of the numbers: " << average << std::endl;

	system("pause");
	return 0;
}

float calculationsNumbers(int t_count) // Function to calculate sums and count odd numbers
{
	int num = 0;
	int largest = 0;
	int smallest = 0;

	float sumAll = 0;
	float average = 0;
	

	for (int i = 1; i <= t_count;) // Loop to get user inputs
	{
		std::cout << "Enter number " << i << ": ";
		std::cin >> num;

		if (num < 5 || num > 15) // Validate range
		{
			std::cout << "Number out of range (5-15). Please re-enter." << std::endl;
			continue; // Prompt for re-entry without incrementing i
		}
		
		sumAll += num; // Add to total sum
		if (i == 1) // Initialize largest and smallest on first input
		{
			largest = num;
			smallest = num;
		}
	
		if (num > largest)
		{
			largest = num; // Update largest
		}
		if (num < smallest)
		{
			smallest = num; // Update smallest
		}
		
		i++;

	}

	average = sumAll / t_count;

	std::cout << "\nTotal sum of all numbers: " << sumAll << std::endl;
	std::cout << "Largest number: " << largest << std::endl;
	std::cout << "Smallest number: " << smallest << std::endl;

	return average;
}