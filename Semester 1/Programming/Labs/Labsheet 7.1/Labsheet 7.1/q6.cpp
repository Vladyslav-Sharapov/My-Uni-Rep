// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/10/25
// Approximate time taken: 15 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q6 Centimeters to Inches
// ---------------------------------------------------------------------------
// Known Bugs: None
//----------------------------------------------------------------------------
// Test data 1: 10 should be 3.94
// Test data 2: -5 should be Error
// Test data 3: 0 should be Error
//----------------------------------------------------------------------------

#include <iostream>

void inchEquivalent(float t_cm); // Function prototype

int main6()
{
	float cm = 0.0f;

	std::cout << "Enter centimeters: ";
	std::cin >> cm;

	if (cm <= 0)
	{
		std::cout << "Error, number cannot be less or equal to 0\n";
	}
	else
	{
		inchEquivalent(cm);
	}

	system("pause");
	return 0;
}

void inchEquivalent(float t_cm)
{
	const float CMTOINCH = 0.394f; // Conversion factor from centimeters to inches
	float inch = t_cm * CMTOINCH;

	std::cout << "Centimeters in inch: " << inch << std::endl;
}