// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q9: Seconds converter
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: 3665 -> Hours: 1, Minutes: 1, Seconds: 5
// Test data 2: 7322 -> Hours: 2, Minutes: 2, Seconds: 2
// Test data 3: -50 -> Error message
// Test data 4: abc -> Invalid input
// ---------------------------------------------------------------------------

#include <iostream>

void secsToHMS(int t_sec);

int main9()
{
	int total_seconds = 0;
	std::cout << "Enter the number of seconds: ";
	if (!(std::cin >> total_seconds))
	{
		std::cout << "Invalid input." << std::endl;
	}
	else if (total_seconds <= 0)
	{
		std::cout << "Error: Number of seconds cannot be negative." << std::endl;
	}
	else
	{
		secsToHMS(total_seconds);
	}
	return 0;
}

void secsToHMS(int t_sec)
{
	int hours = t_sec / 3600; // 1 hour = 3600 seconds
	int minutes = (t_sec % 3600) / 60; // 1 minute = 60 seconds
	int seconds = t_sec % 60; // remaining seconds
	std::cout << "Hours: " << hours << ", Minutes: " << minutes << ", Seconds: " << seconds << std::endl;
}