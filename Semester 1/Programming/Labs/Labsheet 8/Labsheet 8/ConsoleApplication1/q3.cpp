// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q3: Seconds Calculator using function secondsCal(
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: 1 hour, 30 minutes, 0 seconds -> 5400 seconds
// Test data 2: 0 hours, 45 minutes, 15 seconds -> 2715 seconds
// Test data 3: 2 hours, 0 minutes, 30 seconds -> 7230 seconds
// Test data 4: 0 hours, 0 minutes, 0 seconds -> error message
// Test data 5: -1 hours, 30 minutes, 0 seconds -> error message
// ---------------------------------------------------------------------------

#include <iostream>

int secondsCal(int hours, int minutes, int seconds);

int main3()
{
	int hours, minutes, seconds; // Time inputs
	int totalSec = 0;
	bool validInput; // Input validation flag

	std::cout << "Enter hours: ";
	std::cin >> hours;
	std::cout << "Enter minutes: ";
	std::cin >> minutes;
	std::cout << "Enter seconds: ";
	std::cin >> seconds;

	if (hours < 0 || minutes < 0 || seconds < 0 || (hours == 0 && minutes == 0 && seconds == 0)) // Invalid input check
	{
		validInput = false; // Set flag to false
		std::cout << "Error: Please enter non-negative values for hours, minutes, and seconds, with at least one being positive." << std::endl;
	}
	else
	{
		validInput = true; // Set flag to true

		totalSec = secondsCal(hours, minutes, seconds); // Store returned total seconds
		std::cout << "Total seconds: " << totalSec << " seconds." << std::endl;
	}

	system("pause");
	return 0;
}

int secondsCal(int hours, int minutes, int seconds) // Function to calculate total seconds
{
	const int MINS_TO_SEC = 60; // Minutes to seconds conversion factor
	const int HOURS_TO_SEC = 3600; // Hours to seconds conversion factor

	int totalSecCal = (hours * HOURS_TO_SEC) + (minutes * MINS_TO_SEC) + seconds; // Calculate total seconds

	return totalSecCal;
}