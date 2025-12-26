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

int main1()
{
	int number = 0; // Variable to hold user input

    std::cout << "Please enter your number: ";
	std::cin >> number; // Get user input

	if (number == 0) // Check if number is equal to zero
    {
        std::cout << "number was equal to zero" << std::endl;
    }
	else if (number < 0) // Check if number is less than zero
    {
        std::cout << "number was less than zero" << std::endl;
    }
    else
    {
		std::cout << "number was greater to zero" << std::endl;
    }
 
    system("pause");
    return 0;
}
