// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q4
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main4()
{
	int num1 = 0; // Variable to hold user input
	int num2 = 0; // Variable to hold user input

    std::cout << "Enter the first number: ";
	std::cin >> num1; // Get user input

    std::cout << "Enter the second number: ";
	std::cin >> num2; // Get user input

	if (num2 == 0) // Check if num2 is equal to zero
    {
        std::cout << "Error. Cannot divide by zero" << std::endl;
    }
	else if (num1 % num2 == 0) // Check if num1 is exactly divisible by num2
    {
        std::cout << "The first number is exactly divisible by the second number" << std::endl;
    }
    else
    {
        std::cout << "The first number is NOT exactly divisible by the second number" << std::endl;
    }

    system("pause");
    return 0;
}
