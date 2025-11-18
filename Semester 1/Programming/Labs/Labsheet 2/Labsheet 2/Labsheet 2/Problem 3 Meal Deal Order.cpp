// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 5 min
//---------------------------------------------------------------------------
// Program: Problem 3: Meal Deal Order
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main3()
{
	int meal_deal = 15; // meal deal price
	float extra_chips = 2.50; // extra chips price
	int extra_s_drink = 3; // extra sized drink price
	float cost = 0.00f; // total cost variable

	char ans = ' '; // variable for user answer
	std::cout << "Do you want to order Meal Deal? y/n :" << std::endl; // Asking user if he wants meal deal
	std::cin >> ans; // Getting user answer

	if (ans == 'n' || ans == 'N') // Check 1
	{
		std::cout << "Have nice day!" << std::endl;
	}
	else if (ans == 'y' || ans == 'Y') // If user wants meal deal
	{
		cost = meal_deal; // adding meal_deal to cost
		std::cout << "Total cost is: " << cost << std::endl; // Displaying cost
	}
	else
	{
		std::cout << "Error" << std::endl; // If user entered wrong character
		return 0;
	}

	std::cout << "Do you want extra chips? y/n :" << std::endl;
	std::cin >> ans;

	if (ans == 'n' || ans == 'N') // Check 2
	{
		std::cout << "Total cost is: " << cost << std::endl; // if user doesn't want chips, just display cost
	}
	else if (ans == 'y' || ans == 'Y')
	{
		cost = cost + extra_chips; // add chips to cost
		std::cout << "Total cost is: " << cost << std::endl; // display cost
	}
	else
	{
		std::cout << "Error" << std::endl;
		return 0;
	}

	std::cout << "Do you want extra sized drink? y/n :" << std::endl;
	std::cin >> ans;

	if (ans == 'n' || ans == 'N') // Check 3
	{
		std::cout << "Total cost is: " << cost << std::endl; // if user doesn't want extra sized drink, just display cost
	}
	else if (ans == 'y' || ans == 'Y')
	{
		cost = cost + extra_s_drink; // add extra size drink to cost
		std::cout << "Total cost is: " << cost << std::endl; // display cost
	}
	else
	{
		std::cout << "Error" << std::endl;
		return 0;
	}

	int num_of_meals = 0;

	std::cout << "How many meals do you want?" << std::endl; 
	std::cin >> num_of_meals; // Getting user input for number of meals

	if (num_of_meals >= 1 || num_of_meals <= 20) // Last check
	{
		cost = cost * num_of_meals; // total cost * number of meals that user entered
		std::cout << "Total cost is: " << cost << std::endl;
		std::cout << "Have nice day!" << std::endl;
	}
	else
	{
		std::cout << "Error" << std::endl;
	}

    system("pause");
    return 0;
}