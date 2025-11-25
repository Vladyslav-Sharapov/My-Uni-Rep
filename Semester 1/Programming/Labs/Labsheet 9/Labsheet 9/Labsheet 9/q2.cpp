// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q2: Display numbers from 30 to 20 in reverse order, calculate sum and average
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data: 25, 275
// ---------------------------------------------------------------------------

#include <iostream>

void reverseDisplayNums(); // Function prototype to display numbers from 30 to 20 in reverse order, calculate sum and average

int main2()
{
	reverseDisplayNums(); // Call the function to display numbers, sum and average


	system("pause");
	return 0;
}

void reverseDisplayNums() // Function to display numbers from 30 to 20 in reverse order, calculate sum and average
{
	int sum = 0; // Initialize sum to 0
	int count = 0; // Initialize count to 0
	int average = 0; // Initialize average to 0

	for (int i = 30; i >= 20; i--) // Loop from 30 to 20 in reverse order
	{
		std::cout << i << std::endl;
		sum += i; // Add the current number to sum
		count++; // Increment count
	}

	average = sum / count; // Calculate average

	std::cout << "The average of numbers from 20 to 30 is: " << average << std::endl;
	std::cout << "The sum of numbers from 20 to 30 is: " << sum << std::endl;

}