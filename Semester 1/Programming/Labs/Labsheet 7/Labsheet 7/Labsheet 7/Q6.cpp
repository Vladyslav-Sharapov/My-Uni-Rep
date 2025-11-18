// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q6
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main6()
{
	double centimiters = 0.0; // Variable to hold user input 
	double inches = 0.0; // Variable to hold converted value

    std::cout << "Please enter your centimiters: ";
	std::cin >> centimiters; // Get user input

	if (centimiters <= 0) // Check if centimiters is less or equal to 0
    {
        std::cout << "Error. Number of centimiters cannot be less or equal to 0" << std::endl;
    }
	else // Convert centimiters to inches
    {
        inches = centimiters * 0.394;
        std::cout << "Centimiters in inches: " << inches << std::endl;
    }

    system("pause");
    return 0;
}
