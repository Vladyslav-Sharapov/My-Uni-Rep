// Vladyslav Sharapov
// 10/09/2025
// Just fun Project

#include <iostream>

float Pi = 3.14159265359;

void square()
{

	float lenght = 0.0f;
	float width = 0.0f;
	float area = 0.0f;

	std::cout << "Area of Circle" << std::endl;

	std::cout << "Please input your lenght: ";
	std::cin >> lenght; // puts lenght data

	std::cout << "Please input your lenght: ";
	std::cin >> width; // puts lenght data

	area = lenght * width; // counting raius in square by Pi

	std::cout << "Area is: " << area << std::endl; // show result

}

void circle_area()
{
	float radius = 0.0f;
	float area = 0.0f; 

	std::cout << "Area of Circle" << std::endl;

	std::cout << "Please input your radius: ";
	std::cin >> radius; // puts radius data

	if (radius <= 0.0f) // in case "someone" smart
	{
		std::cout << "Are you stupid?" << std::endl;
	}
	else;

	area = radius * radius * Pi; // counting raius in square by Pi

	std::cout << "Area is: " << area << std::endl; // show result
}

int main()
{

	int answ;
	
	std::cout << "What do you want to calculate? \n1.Square area \n2. Circle area \n";
	std::cin >> answ;

	if (answ == 1)
	{
		square();
	}
	else if (answ == 2)
	{
		circle_area;
	}
	else
	{
		return 0;
	}

	std::cout << "Do you want to try again? (y/n): ";

	char answer = ' ';

	std::cin >> answer; // put answer

	if (answer == 'y' || answer == 'Y') // if yes - restart
	{
		main();
	}
	else; // if no - end prog

	return 0;
}