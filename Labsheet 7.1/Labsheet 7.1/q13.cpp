// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 03/11/25
// Approximate time taken: 15 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q13 Check divisibility first number by other two
// ---------------------------------------------------------------------------
// Known Bugs:
// Test data 1: 5 4 10  should be Not divisible by either number
// Test data 2: 6 10 12 should be Not divisible by either number
// Test data 3: 3 3 -1 should be Divisible by both numbers
// Test data 4: 10 5 15 should be 10 % 5 only
// Test data 5: -3 2 3 should be  -3 % 3 only
// Test data 6:  1 2 3 should be Not divisible by either number
//----------------------------------------------------------------------------

#include <iostream>

void compareNum(int t_num1, int t_num2, int t_num3);

int main13()
{
	int num1, num2, num3; // Variables to hold user input

	std::cout << "Three Numbers Divisible Check\n"; // Program title

	std::cout << "Enter first number: "; // Prompt for first number
	std::cin >> num1; // Read first number
	std::cout << "Enter second number: "; // Prompt for second number
	std::cin >> num2; // Read second number
	std::cout << "Enter third number: "; // Prompt for third number
	std::cin >> num3; // Read third number

	compareNum(num1, num2, num3);

	system("pause");
	return 0;
}

void compareNum(int t_num1, int t_num2, int t_num3) // Function to compare the first number with the other two numbers
{
	if (t_num1 % t_num2 == 0 && t_num1 % t_num3 == 0) // Check if num1 is exactly divisible by both num2 and num3
	{
		std::cout << "The first number is exactly divisible by both numbers.\n";
	}
	else if (t_num1 % t_num2 == 0 || t_num1 % t_num3 == 0) // Check if num1 is exactly divisible by either num2 or num3
	{
		std::cout << "The first number is exactly divisible by one of the numbers: \n";
		if (t_num1 % t_num2 == 0) // Check if num1 is exactly divisible by num2
		{
			std::cout << t_num1 << " % " << t_num2 << std::endl;
		}
		else // If num1 is exactly divisible by num3
		{
			std::cout << t_num1 << " % " << t_num3 << std::endl;
		}
	}
	else // If num1 is not exactly divisible by either num2 or num3
	{
		std::cout << "The first number is not exactly divisible by either number.\n";
	}
}