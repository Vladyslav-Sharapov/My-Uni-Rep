// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/09/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Radius of Circle from circumference
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main4()
{
	std::cout << "Part 1" << std::endl;

	float radius = 0.0f;
	float circumference = 0.0f;
	float PI = 3.14159265359;

	std::cout << "Radius of Circle from circumference" << std::endl;

	std::cout << "Please input your circumference: ";
	std::cin >> circumference; // puts radius data

	if (circumference <= 0.0f) // in case "someone" smart
	{
		std::cout << "Are you stupid?" << std::endl;
	}
	else
	{
		radius = circumference / (2 * PI); // counting radius

		std::cout << "Radius is: " << radius << std::endl; // show result
	}

	system("Pause");
	return 0;
}