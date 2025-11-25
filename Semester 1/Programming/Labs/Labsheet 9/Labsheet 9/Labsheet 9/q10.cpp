// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q10: Using a Menu
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: 100 (Fahrenheit) // Expected Output 1: 37.7778 Cel
// Test Data 2: 10 (Inches) // Expected Output 2: 25.4 cm
// Test Data 3: 32 (Fahrenheit) // Expected Output 3: 0 Cel
// Test Data 4: 0 (Inches) // Expected Output 4: 0 cm
// Test Data 5: 212 (Fahrenheit) // Expected Output 5: 100 Cel
// Test Data 6: 50 (Inches) // Expected Output 6: 127 cm
// Test Data 7: 3 (Menu Choice) // Expected Output 7: Exiting the program.
// Test Data 8: 4 (Menu Choice) // Expected Output 8: Invalid choice. Please try again.
// ---------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>


void fahrenheitToCelsius();
void inchesToCentimetres();

int main10()
{
	int choice; // Variable to store user choice
	do
	{
		system("cls"); // Clear the console screen

		std::cout << "Menu:\n1. Fahrenheit to Celsius\n2. Inches to Centimetres\n3. Exit\nEnter your choice: ";
		std::cin >> choice;

		switch (choice)
		{
		case 1: // Case for Fahrenheit to Celsius conversion
		{
			system("cls");

			fahrenheitToCelsius(); // Call function to convert Fahrenheit to Celsius
			break;
		}
		case 2: // Case for Inches to Centimetres conversion
		{
			system("cls");

			inchesToCentimetres(); // Call function to convert Inches to Centimetres
			break;
		}
		case 3: // Case to exit the program
			std::cout << "Exiting the program." << std::endl;
			break;
		default: // Default case for invalid choice
			std::cout << "Invalid choice. Please try again." << std::endl;
			system("pause");
			break;
		}
	} while (choice != 3);
	system("pause");
	
	return 0;
}

void fahrenheitToCelsius() // Function to convert Fahrenheit to Celsius
{
	double fahrenheit, celsius;

	std::cout << "Enter temperature in Fahrenheit: ";
	std::cin >> fahrenheit;

	celsius = (fahrenheit - 32) * 5.0 / 9.0;

	std::cout << "Temperature in Celsius: " << celsius << " Cel" << std::endl;
	system("pause");
}

void inchesToCentimetres() // Function to convert Inches to Centimetres
{
	double inches, centimetres;

	std::cout << "Enter length in Inches: ";
	std::cin >> inches;

	centimetres = inches * 2.54;
	std::cout << "Length in Centimetres: " << centimetres << " cm" << std::endl;

	system("pause");
}
