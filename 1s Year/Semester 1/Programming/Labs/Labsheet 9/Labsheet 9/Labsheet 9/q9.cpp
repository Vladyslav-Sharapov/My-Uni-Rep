// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q9: Sum of User-Entered Numbers within a Range
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: 7, 10, 4, 12, 0 // Expected Output 1: 29
// Test Data 2: 5, 6, 13, 9, 0 // Expected Output 2: 20
// ---------------------------------------------------------------------------

#include <iostream>

void sumTotal();

int main9()
{
	sumTotal();

	system("pause");
	return 0;
}

void sumTotal() // Function to sum user-entered numbers between 5 and 12
{
	int num;
	int sum = 0;
	std::cout << "Enter numbers to sum (enter 0 to stop): " << std::endl;
	while (true) // Infinite loop until user enters 0
	{
		std::cout << "Enter number: ";
		std::cin >> num;
		if (num == 0)
		{
			break; // Exit the loop if the user enters 0
		}
		else if (num < 5 || num > 12)
		{
			std::cout << "Invalid input. Please enter a number between 5 and 12." << std::endl;
		}
		else
		{
			sum += num; // Add the number to the sum
		}
	}
	std::cout << "Total sum of entered numbers: " << sum << std::endl;
}