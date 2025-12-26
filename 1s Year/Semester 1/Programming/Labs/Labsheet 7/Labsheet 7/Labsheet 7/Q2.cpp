// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q2
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main2()
{
	int income = 0; // Variable to hold user input

    std::cout << "Please enter your income: ";
	std::cin >> income; // Get user input

	if (income >= 0 && income <= 30000) // Check if income is in the range of low income
    {
        std::cout << "low income" << std::endl;
    }
	else if (income > 30000 && income <= 70000) // Check if income is in the range of middle income
    {
        std::cout << "middle income" << std::endl;
    }
	else if (income > 70000) // Check if income is in the range of high income
    {
        std::cout << "high income" << std::endl;
    }
	else // Check if income is less than zero
    {
        std::cout << "Error" << std::endl;
    }

    system("pause");
    return 0;
}
