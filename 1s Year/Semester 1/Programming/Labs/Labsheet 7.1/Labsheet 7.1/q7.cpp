// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/10/25
// Approximate time taken: 15 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q7 Convert Hours, Minutes, Seconds to Total Seconds
// ---------------------------------------------------------------------------
// Known Bugs: None
//----------------------------------------------------------------------------
// Test data 1: 1 30 15 should be 5415
// Test data 2: -1 20 30 should be Error
// Test data 3: 0 0 0 should be Error
//----------------------------------------------------------------------------

#include <iostream>

void secondsIn(int t_hours, int t_minutes, int t_seconds); // Function prototype

int main7()
{
	int hours = 0; // Variable to hold hours
	int minutes = 0; // Variable to hold minutes
	int seconds = 0; // Variable to hold seconds
	std::cout << "Enter hours: "; 
	std::cin >> hours; 
	std::cout << "Enter minutes: ";
	std::cin >> minutes;
	std::cout << "Enter seconds: ";
	std::cin >> seconds;

	if (hours < 0 || minutes < 0 || seconds < 0) // Error if any number is less than 0
	{
		std::cout << "Error, number cannot be less than 0\n"; 
	}
	else if (hours == 0 && minutes == 0 && seconds == 0) // Error if all numbers equal to 0
	{
		std::cout << "Error, all numbers cannot equal to 0\n";
	}
	else
	{
		secondsIn(hours, minutes, seconds); // Call function
	}

	system("pause");
	return 0;
}

void secondsIn(int t_hours, int t_minutes, int t_seconds) // Function do the conversion
{
	const int HOURTOSECONDS = 3600; // 1 hour = 3600 seconds
	const int MINUTETOSECONDS = 60; // 1 minute = 60 seconds

	int totalSeconds = (t_hours * HOURTOSECONDS) + (t_minutes * MINUTETOSECONDS) + t_seconds; // Calculate total seconds by converting hours and minutes to seconds and adding them all together
	std::cout << "Total time in seconds: " << totalSeconds << std::endl;
}
