// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q1
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main5b()
{
	int num1 = 0; // Variable to hold user input
	int num2 = 0; // Variable to hold user input
	int num3 = 0; // Variable to hold user input

	std::cout << "Enter first number (1 - 15): "; // Prompt for first number
    std::cin >> num1;

	std::cout << "Enter second number (1 - 15): "; // Prompt for second number
    std::cin >> num2;

	std::cout << "Enter third number (1 - 15): "; // Prompt for third number
    std::cin >> num3;

    if (num1 < 1 || num1 >15 || num2 < 1 || num2 >15 || num3 < 1 || num3 >15) //If one of the numbers less than 1 or higher than 15
    {
        std::cout << "Error. Number can't be less than 1 and higher than 15" << std::endl;
    }
	else if (num1 <= num2 && num1 <= num3) // Find the lowest number
    {
        std::cout << "Lowest number is: " << num1 << std::endl;
    }
	else if (num2 <= num1 && num2 <= num3) // Find the lowest number
    {
        std::cout << "Lowest number is: " << num2 << std::endl;
    }
	else // If num3 is the lowest number
    {
        std::cout << "Lowest number is: " << num3 << std::endl;
    }


	std::cout << "Your celcius temperature is: " << std::endl;

    system("pause");
    return 0;
}
