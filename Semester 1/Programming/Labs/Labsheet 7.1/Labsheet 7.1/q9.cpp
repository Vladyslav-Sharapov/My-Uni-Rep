// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/10/25
// Approximate time taken: 20 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q9 Perimeter of Rectangle
// ---------------------------------------------------------------------------
// Known Bugs: None
//----------------------------------------------------------------------------
// Test data 1: 5 3 should be 16
// Test data 2: -4 2 should be Error
// Test data 3: 0 7 should be Error
// Test data 4: 6 4 should be 20
// Test data 5: 10 2.5 should be 25
//----------------------------------------------------------------------------
#include <iostream>

void calPerimeterRectangle(float t_length, float t_width); // Function prototype

int main9()
{
	float length = 0.0f; // Variable to hold length
	float width = 0.0f; // Variable to hold width
	std::cout << "Enter length: ";
	std::cin >> length;
	std::cout << "Enter width: ";
	std::cin >> width;
	if (length <= 0 || width <= 0) // Error if any number is less or equal to 0
	{
		std::cout << "Error, number cannot be less or equal to 0\n";
	}
	else
	{
		calPerimeterRectangle(length, width); // Call function
	}
	system("pause");
	return 0;
}

void calPerimeterRectangle(float t_length, float t_width) // Function to calculate perimeter of rectangle
{
	float perimeter = 2 * (t_length + t_width); // Calculate perimeter
	std::cout << "Perimeter of rectangle: " << perimeter << std::endl;
}
