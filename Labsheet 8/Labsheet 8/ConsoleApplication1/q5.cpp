// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q5: Indicates whether the first number is exactly divisible by the second numbe
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: 10, 2 -> 10 is exactly divisible by 2
// Test data 2: 10, 3 -> 10 is not exactly divisible by 3
// Test data 3: 15, 5 -> 15 is exactly divisible by 5
// Test data 4: 15, 4 -> 15 is not exactly divisible by 4
// Test data 5: -20, 0 -> Error message
// ---------------------------------------------------------------------------

#include <iostream>

bool isDivisible(int num1, int num2);

int main()
{
	int numA, numB;
	bool numDivisible = false;

	std::cout << "Enter two integers: ";
	std::cin >> numA >> numB;

	if (numA <= 0 || numB < 0)
	{
		std::cout << "Error: Division by zero is not allowed." << std::endl;

	}
	else
	{
		numDivisible = isDivisible(numA, numB);
		if (numDivisible == true)
		{
			std::cout << "Both numbers are divisible\n";
		}
		else
		{
			std::cout << "Both numbers are not divisible\n";
		}
	}
	
	return 0;
}

bool isDivisible(int num1, int num2)
{
	bool divisible = false;
	
	if (num1 % num2 == 0)
	{
		divisible = true;
	}
	
	return divisible;

}