// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q5
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main5()
{
	double celcius = 0.0; // Variable to hold converted value
	double fahrenheit = 0.0; // Variable to hold user input

    std::cout << "Celsius from Fahrenheit" << std::endl; // Heading
    std::cout << "Enter fahrenheit temperature: ";
    std::cin >> fahrenheit;

    celcius = (fahrenheit - 32) * 5 / 9; // Calculation with formula

	std::cout << "Your celcius temperature is: " << celcius << std::endl; // Output result

    system("pause");
    return 0;
}
