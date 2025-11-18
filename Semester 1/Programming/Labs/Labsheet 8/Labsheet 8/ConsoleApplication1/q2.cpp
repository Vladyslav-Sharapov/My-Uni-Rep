// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q2: centemiter to inch converter using function inchesEquivalent( )
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: 10 cm -> 3.93701 inches
// Test data 2: 25.4 cm -> 10 inches
// Test data 3: 50 cm -> 19.685 inches
// ---------------------------------------------------------------------------

#include <iostream>

double inchesEquivalent(double cmValue);

int main2()
{
	double cmValue; // Centimeter input
	double inchValue; // Inches output

	bool validInput; // Input validation flag

	std::cout << "Enter a length in centimeters: ";
	std::cin >> cmValue;

	if (cmValue <= 0) // Invalid input check
	{
		validInput = false; // Set flag to false
		std::cout << "Error: Please enter a positive number for centimeters." << std::endl;
	}
	else // Valid input
	{
		validInput = true; // Set flag to true
		inchValue = inchesEquivalent(cmValue); // Call function to convert cm to inches
		std::cout << cmValue << " cm is equivalent to " << inchValue << " inches." << std::endl;
	}

	system("pause");
	return 0;
}

double inchesEquivalent(double cmValue) // Function to convert cm to inches
{
	const double CM_TO_INCH = 2.54; // Conversion factor

	double inchValue = cmValue / CM_TO_INCH; // Convert cm to inches

	return inchValue;
}	