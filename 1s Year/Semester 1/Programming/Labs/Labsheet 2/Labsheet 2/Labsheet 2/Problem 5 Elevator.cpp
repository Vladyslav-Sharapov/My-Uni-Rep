// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 15 min
//---------------------------------------------------------------------------
// Program: Problem 5: Elevator
// ---------------------------------------------------------------------------
// Known Bugs:
// int, float can't calculate normally together

#include <iostream>

int main5()
{
	float number_of_children = 0; // Variable for user input of number of children

    std::cout << "How many children are getting into the lift?" << std::endl;
	std::cin >> number_of_children; // Get user input

	if (number_of_children < 0) // Check for negative input
    {
        std::cout << "Error. Number of children can not be negative." << std::endl;
        return 0;
    }
    else;

	int total_capacity_children = 20; // Total capacity of children in the lift
	int total_capacity_adults = 15; // Total capacity of adults in the lift

    //Calculate the proportion of elevator space used by children
    float child_ratio = number_of_children / total_capacity_children;

    //Calculate how many adults can still fit based on remaining capacity
    float remaining_adult_capacity = total_capacity_adults * (1 - child_ratio);

    //Round down to nearest whole number (since you can't have part of an adult)
    float adults_allowed = remaining_adult_capacity;

    std::cout << adults_allowed << " adults can still get into the lift." << std::endl;

    system("pause");
    return 0;
}