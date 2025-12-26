// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q7
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main7()
{
	int hours = 0; // Variable to hold user input 
	int minutes = 0; // Variable to hold user input
	int seconds = 0; // Variable to hold user input
	int total_seconds = 0; // Variable to hold calculated total seconds

    std::cout << "Please enter the number of hours: ";
    std::cin >> hours;

    std::cout << "Please enter the number of minutes: ";
    std::cin >> minutes;

    std::cout << "Please enter the number of sedonds: ";
    std::cin >> seconds;

    if (hours < 0 || minutes < 0 || seconds < 0) // If one of the numbers less than zero
    {
        std::cout << "Error. Number cannot be less than zero" << std::endl;
    }
    else
    {
        total_seconds = (hours * 3600) + (minutes * 60) + seconds; //1 hour = 3,600s

        std::cout << "Your total seconds: " << total_seconds << "sec" << std::endl;
    }

    system("pause");
    return 0;
}
