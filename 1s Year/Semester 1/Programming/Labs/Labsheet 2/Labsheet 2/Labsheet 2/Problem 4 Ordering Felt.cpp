// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 5 min
//---------------------------------------------------------------------------
// Program: Problem 4: Ordering Felt
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>
#include <cmath>    // for ceil()

int main4()
{
	float total_meters_and_centimeters = 0.00f; // Variable to store user input for total length of felt in meters and centimeters
	std::cout << "Felt Ordering System" << std::endl;
	std::cout << "How much felt do you want - enter in meters and centimeters?" << std::endl;
	std::cin >> total_meters_and_centimeters; // Get user input
	
	if (total_meters_and_centimeters < 0) // Check for negative input
	{
		std::cout << "Error. Length of felt can not be negative." << std::endl; 
		return 0;
	}
	else;

	// Convert user input into centimeters
	float user_length_cm = total_meters_and_centimeters * 100;

	// Declare variables
    int feet = 6;
	int inches = 8;

	// Conversion factors
	float cm_per_inch = 2.54;
	float cm_per_foot = 12 * cm_per_inch;

	// Calculate roll length in centimeters
	float roll_length_cm = (feet * cm_per_foot) + (inches * cm_per_inch);

		// Calculate number of rolls required
	float rolls_needed = ceil(user_length_cm / roll_length_cm);

		// Calculate total supplied felt length
	float total_supplied_cm = rolls_needed * roll_length_cm;

		// Calculate unused felt in centimeters
	float not_needed_cm = total_supplied_cm - user_length_cm;

	std::cout << "You will need this number of rolls: " << rolls_needed << std::endl;
	std::cout << "Number of centimeters not needed: " << not_needed_cm << std::endl;

    system("pause");
    return 0;
}