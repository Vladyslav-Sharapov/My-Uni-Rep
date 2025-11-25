// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q6: Multiplication Table
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: Input: 5, Output: 5x1=5 ... 5x10=50
// Test Data 2: Input: 12, Output: 12x1=12 ... 12x10=120
// Test Data 3: Input: -3, Output: Invalid input message
// ---------------------------------------------------------------------------

#include <iostream>

void displayTimeTable(int num);

int main6()
{
	int number; // Number for multiplication table
	std::cout << "Enter a number to display its multiplication table: ";
	std::cin >> number;
	if (number < 1 || number > 12) // Validate input
	{
		std::cout << "Invalid input. Please enter a positive integer." << std::endl;
	}
	else
	{
		displayTimeTable(number);
	}
	system("pause");
	return 0;
}

void displayTimeTable(int num)
{
	std::cout << "Multiplication table for " << num << ":" << std::endl;
	for (int i = 1; i <= 10; i++)
	{
		std::cout << num << " x " << i << " = " << num * i << std::endl;
	}
}
