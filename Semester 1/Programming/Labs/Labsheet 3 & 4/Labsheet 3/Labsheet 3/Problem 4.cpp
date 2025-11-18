// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 20 min
//---------------------------------------------------------------------------
// Program: Problem 4: Leg counting problem
// ---------------------------------------------------------------------------
// Known Bugs: Brain bugs
// None

#include <iostream>

int main4()
{
	int total_animals = 0; // User input total number of animals
	int total_legs = 0; // User input total number of legs

	std::cout << "Enter the total number of animals" << std::endl; // Prompt for total number of animals
	std::cin >> total_animals; // Input total number of animals
	std::cout << "Enter the total number of legs" << std::endl; // Prompt for total number of legs
	std::cin >> total_legs; // Input total number of legs

    int chikens = (4 * total_animals - total_legs) / 2; //formula to count amount of chikens
    int sheeps = total_animals - chikens; //formula to count amount of sheeps

	std::cout << "Total amount of chikens: " << chikens << std::endl; // Output total amount of chikens
	std::cout << "Total amount of sheeps: " << sheeps << std::endl; // Output total amount of sheeps

    system("pause");
    return 0;
}
