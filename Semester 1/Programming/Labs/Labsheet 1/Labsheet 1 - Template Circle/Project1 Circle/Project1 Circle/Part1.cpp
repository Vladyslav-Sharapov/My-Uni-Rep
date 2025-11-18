// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/09/25
// Approximate time taken: 5 min
//---------------------------------------------------------------------------
// Program: Circle area calcualtion
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main1()
{
	std::cout << "Part 1" << std::endl;

	float radius = 0.0f;
	float area = 0.0f;
	float PI = 3.14159265359;

	std::cout << "Area of Circle" << std::endl;

	std::cout << "Please input your radius: ";
	std::cin >> radius; // puts radius data

	if (radius <= 0.0f) // in case "someone" smart
	{
		std::cout << "Are you stupid?" << std::endl;
	}
	else
	{
		area = radius * radius * PI; // counting raius in square by Pi
	}


	system("Pause");
	return 0;
}