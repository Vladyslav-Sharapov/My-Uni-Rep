// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q13
// ---------------------------------------------------------------------------
// Known Bugs:
// Test data 1: 5 4 10  should be Not divisible by either number
// Test data 2: 6 10 12 should be Not divisible by either number
// Test data 3: 3 3 -1 should be Divisible by both numbers
// Test data 4: 10 5 15 should be 10 % 5 only
// Test data 5: -3 2 3 should be  -3 % 3 only
// Test data 6:  1 2 3 should be Not divisible by either number

#include <iostream>

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

	if (num1 % num2 == 0 && num1 % num3 == 0) // Check if num1 is exactly divisible by both num2 and num3
	{
		std::cout << "The first number is exactly divisible by both numbers.\n";
	}
	else if (num1 % num2 == 0 || num1 % num3 == 0) // Check if num1 is exactly divisible by either num2 or num3
	{
		std::cout << "The first number is exactly divisible by one of the numbers: \n";
		if (num1 % num2 == 0) // Check if num1 is exactly divisible by num2
		{
			std::cout << num1 << " % " << num2 << std::endl;
		}
		else // If num1 is exactly divisible by num3
		{
			std::cout << num1 << " % " << num3 << std::endl;
		}
	}
	else // If num1 is not exactly divisible by either num2 or num3
	{
		std::cout << "The first number is not exactly divisible by either number.\n";
	}

    system("pause");
    return 0;
}
