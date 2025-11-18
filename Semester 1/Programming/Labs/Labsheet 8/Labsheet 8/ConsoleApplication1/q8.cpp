// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q8: Rectangle Area
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------

#include <iostream>

float calAreaRectangle(float length, float width);
float calPerimeterRectangle(float length, float width);

int main()
{
    float length = 0.0f, width = 0.0f;

    std::cout << "Enter the length and width of the rectangle: ";
    if (!(std::cin >> length >> width))
    {
        std::cout << "Invalid input." << std::endl;
        return 1;
    }

    if (length <= 0.0f || width <= 0.0f)
    {
        std::cout << "Error: length and width must be greater than 0." << std::endl;
        return 1;
    }

    float area = calAreaRectangle(length, width);
    float perimeter = calPerimeterRectangle(length, width);

    std::cout << "Area: " << area << std::endl;
    std::cout << "Perimeter: " << perimeter << std::endl;

    return 0;
}

float calAreaRectangle(float length, float width)
{
    return length * width;
}

float calPerimeterRectangle(float length, float width)
{
    return 2.0f * (length + width);
}
