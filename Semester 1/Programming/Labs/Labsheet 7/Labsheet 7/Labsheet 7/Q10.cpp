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

int main10()
{
	int amount = 0; // Variable to hold user input
	int ten_notes = 0; // Variable to hold number of 10 euro notes
	int one_coin = 0; // Variable to hold number of 1 euro coins

    std::cout << "Enter the amount in euro: ";
	std::cin >> amount; // Get user input

	if (amount <= 0) // Check if amount is less or equal to 0
    {
        std::cout << "Error. Number cannot be less than zero" << std::endl;
    }
    else
    {
		ten_notes = amount / 10; // Calculate number of 10 euro notes
		one_coin = amount % 10; // Calculate number of 1 euro coins

        std::cout << "You have " << ten_notes << ", 10 euro notes and "
            << one_coin << ", 1 euro coins" << std::endl;
    }

    system("pause");
    return 0;
}
