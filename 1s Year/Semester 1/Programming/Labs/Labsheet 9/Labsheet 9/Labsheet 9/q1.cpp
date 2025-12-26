// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q1: Display numbers from 1 to 15 and return their sum
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data: 120
// ---------------------------------------------------------------------------

#include <iostream>

int displayNumbers();

int main1()
{
	int sum = 0;
	sum = displayNumbers(); // Call the function to display numbers and get the sum
	std::cout << "The sum of numbers from 1 to 15 is: " << sum << std::endl;

	system("pause");
	return 0;
}

int displayNumbers() // Function to display numbers from 1 to 15 and return their sum
{
	int sum = 0; // Initialize sum to 0

	for (int i = 1; i <= 15; i++) // Loop from 1 to 15
	{
		std::cout << i << std::endl; // Display the current number
		sum += i; // Add the current number to sum
	}

	return sum;
}