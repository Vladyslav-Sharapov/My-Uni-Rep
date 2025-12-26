// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q8: Rectangle Area
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: 5, 10 -> Area: 50, Perimeter: 30
// Test data 2: 7.5, 3.2 -> Area: 24, Perimeter: 21.4
// Test data 3: -4, 5 -> Error message
// Test data 4: abc, 5 -> Invalid input
// ---------------------------------------------------------------------------

#include <iostream>

float calAreaRectangle(float length, float width);
float calPerimeterRectangle(float length, float width);

int main8()
{
    float length = 0.0f, width = 0.0f;

    std::cout << "Enter the length and width of the rectangle: ";
	if (!(std::cin >> length >> width)) // Input validation
    {
        std::cout << "Invalid input." << std::endl;
    }
	else if (length <= 0.0f || width <= 0.0f) // Validate positive values
    {
        std::cout << "Error: length and width must be greater than 0." << std::endl;
    }
    else
    {
        float area = calAreaRectangle(length, width);
        float perimeter = calPerimeterRectangle(length, width);

        std::cout << "Area: " << area << std::endl;
        std::cout << "Perimeter: " << perimeter << std::endl;
    }
    

    return 0;
}

float calAreaRectangle(float length, float width) // Area = length * width
{
    return length * width;
}

float calPerimeterRectangle(float length, float width) // Perimeter = 2 * (length + width)
{
    return 2.0f * (length + width);
}
