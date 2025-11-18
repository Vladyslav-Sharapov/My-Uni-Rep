// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/09/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Sphere Volume & Surface Area
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main()
{
	std::cout << "Part 1" << std::endl;

	float PI = 3.14159265359;
	float radius = 0.0f;
	float volume = 0.0f;
	float surface_area = 0.0f;

	std::cout << "Sphere Volume & Surface Area" << std::endl;

	std::cout << "Please input your radius: ";
	std::cin >> radius; // puts radius data

	if (radius <= 0.0f) // in case "someone" smart
	{
		std::cout << "Are you stupid?" << std::endl;
	}
	else
	{
		volume = 4 * PI * radius * radius * radius / 3; // calcuting volume throgh the formula = 4 *PI * radius^3
		surface_area = 4 * PI * radius * radius; // calcuting surface area throgh the formula = 4 *PI * radius^2

		std::cout << "Volume is: " << volume << std::endl; // show result
		std::cout << "Surface Area is: " << surface_area << std::endl; // show result
	}

	system("Pause");
	return 0;
}