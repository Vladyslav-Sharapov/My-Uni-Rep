// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q9
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main9()
{
	double length = 0.0; // Variable to hold user input
	double width = 0.0; // Variable to hold user input
	double perimiter = 0.0; // Variable to hold calculated perimiter

    std::cout << "Perimiter of Rectangle\n"; //Heading

    std::cout << "Enter length of the rectangle: ";
	std::cin >> length; // Get user input

    std::cout << "Enter width of the rectangle: ";
	std::cin >> width; // Get user input

	if (length <= 0 || width <= 0) // Check if length or width is less or equal to 0
    {
        std::cout << "Error. Number cannot be less or equal to zero\n";
    }
    else
    {
		perimiter = 2 * (width + length); // Calculate perimiter
        std::cout << "Rectangle perimiter: " << perimiter << std::endl;
    }

    system("pause");
    return 0;
}
