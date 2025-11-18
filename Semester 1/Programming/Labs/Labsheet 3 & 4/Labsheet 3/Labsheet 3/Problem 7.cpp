// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 06/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Problem 7: The Ant-Sugar problem
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main()
{
	double length = 0.00; // Length of the room
	double width = 0.00; // Width of the room
	double height = 0.00; // Height of the room

    std::cout << "The Ant-Sugar problem" << std::endl; // Heading
	std::cout << "Enter the length of the room (meters): "; // Prompt for length
	std::cin >> length; // Input length
	std::cout << "Enter the width of the room (meters): "; // Prompt for width
	std::cin >> width; // Input width
	std::cout << "Enter the height of the room (meters): "; // Prompt for height
	std::cin >> height; // Input height

	double distance = sqrt((width + height) * (width + height) + (length * length)); // Calculate the shortest walking route using the Pythagorean theorem

	std::cout << "The shortest walking route to the sugar is: " << distance << " meters" << std::endl; // Output the result

    system("pause");
    return 0;
}
