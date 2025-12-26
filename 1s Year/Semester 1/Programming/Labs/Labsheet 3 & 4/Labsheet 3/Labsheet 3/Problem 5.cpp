// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 06/10/25
// Approximate time taken: 30 min
//---------------------------------------------------------------------------
// Program: Problem 5: Ordering System (Past Written Exam 1 Question)
// ---------------------------------------------------------------------------
// Known Bugs:
// int, float bugs

#include <iostream>

int main5()
{
	float girders_per_group = 10; //10 girders per group
    float cost_per_group = 60; //60$
	float dollar_to_euro = 0.9; //1 dollar = 0.9 euro
	float number_of_girders = 0.00f; // User input number of girders

    std::cout << "Ordering System" << std::endl; // Heading
	std::cout << "Please input number of girders : " << std::endl; // Prompt for number of girders
	std::cin >> number_of_girders; // Input number of girders

    float groups_needed = ceil(number_of_girders / girders_per_group); //ceil round up the number

	float total_cost_dollars = groups_needed * cost_per_group; //total cost in dollars

	float total_girders_bought = groups_needed * girders_per_group; //total girders bought

	float unused_girders = total_girders_bought - number_of_girders; //unused girders

	float cost_per_girder = cost_per_group / girders_per_group; //cost per girder
	float unused_cost_dollars = unused_girders * cost_per_girder; //cost of unused girders in dollars

	float total_cost_euro = total_cost_dollars * dollar_to_euro; //total cost in euro

	std::cout << "Total cost in dollars: " << total_cost_dollars << std::endl; // Output total cost in dollars
	std::cout << "Total cost in euro: " << total_cost_euro << std::endl; // Output total cost in euro
	std::cout << "Total unused dollars: " << unused_cost_dollars << std::endl; // Output unused cost in dollars

    system("pause");
    return 0;
}
