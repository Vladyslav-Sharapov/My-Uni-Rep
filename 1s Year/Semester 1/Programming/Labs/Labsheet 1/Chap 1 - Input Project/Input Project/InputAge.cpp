// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 15/Sept/2025
// No hours: 30 mins
//---------------------------------------------------------------------------
// Program: Asks the user to enter their age and then displays have a nice day
// ---------------------------------------------------------------------------
// Known Bugs:
// No validation on user input

#include <iostream>

int main()
{
	int age = 0;
	int fage = 0;

	std::cout << "Please enter your age: " << std::endl;
	std::cin >> age;   // ask user to enter their age

	std::cout << "Please enter your friend age: " << std::endl;
	std::cin >> fage;   // ask user to enter their fiend age

	std::cout << "Tour and your friend ages: " << age << " " << fage << std::endl;
	std::cout << "Your age next year is: " << age + 1 << std::endl;

	// You need to use a breakpoint to view the contents of the age variable
	// to check it contains the right value

	std::cout << "Hope to see you again soon" <<  std::endl;

	system("Pause");
	return 0;
}
