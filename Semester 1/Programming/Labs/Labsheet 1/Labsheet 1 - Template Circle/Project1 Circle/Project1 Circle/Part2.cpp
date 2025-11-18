// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/09/25
// Approximate time taken: 5 min
//---------------------------------------------------------------------------
// Program: Circumference of Circle calcualtion
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main2()
{
	std::cout << "Part 1" << std::endl;

	float PI = 3.14159265359;

	float radius = 0.0f;
	float circumference = 0.0f;

	std::cout << "Circumference of Circle" << std::endl;

	std::cout << "Please input your radius: ";
	std::cin >> radius; // puts radius data

	if (radius <= 0.0f) // in case "someone" smart
	{
		std::cout << "Are you stupid?" << std::endl; // show message if radius <= 0
		return 0;
	}
	else
	{
		circumference = 2 * PI * radius; // calculating circumference

		//std::cout << "Circumference is: " << circumference << std::endl; // show result

	}

	system("Pause");
	return 0;
}