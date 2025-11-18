// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Problem 1: The Fly-Sugar problem
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main1()
{
	float length = 0.00f; // Length of the room
	float width = 0.00f; // Width of the room
	float height = 0.00f; // Height of the room
	float distance = 0.00f; // Distance to the sugar
	float floor_area = 0.00f; // Floor area of the room

    std::cout << "Fly problem" << std::endl; // Heading
	std::cout << "Please enter length of the room: " << std::endl; // Prompt for length of the room
	std::cin >> length; // Input length
	std::cout << "Please enter width of the room: " << std::endl; // Prompt for width of the room
	std::cin >> width; // Input width
	std::cout << "Please enter height of the room" << std::endl; // Prompt for height of the room
	std::cin >> height; // Input height

    distance = sqrt((length * length) + (width * width) + (height * height)); //square route of length^2 + width^2 + height^2 to find the diagonal(shortest distance)
	floor_area = length * width; //floor area formula

	std::cout << "Floor area of the room is: " << floor_area << std::endl; // Output floor area of the room
	std::cout << "Shortest distance to the sugar is: " << distance << std::endl; // Output shortest distance to the sugar

    system("pause");
    return 0;
}
