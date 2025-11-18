// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q7: Cinema Example
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: Age 4 -> Price $0
// Test data 2: Age 10 -> Price $7.5
// Test data 3: Age 30 -> Price $15
// Test data 4: Age 60 -> Price $0
// ---------------------------------------------------------------------------

#include <iostream>

float calculatePrice(int age, float PRICE);

int main7()
{
	int age;
	const float PRICE = 15.0f;

	std::cout << "Enter your age: ";
	std::cin >> age;
	if (age < 0)
	{
		std::cout << "Error: Age cannot be negative." << std::endl;
	}
	else
	{
		float ticketPrice = calculatePrice(age, PRICE);
		std::cout << "Your ticket price is: $" << ticketPrice << std::endl;
	}
	
	system("pause");
	return 0;
}

float calculatePrice(int age, float PRICE)
{
	float ticketPrice;

	if (age < 5)
	{
		ticketPrice = PRICE * 0; // Free for under 5
	}
	else if (age >= 5 && age <= 12)
	{
		ticketPrice = PRICE / 2; // Child price
	}
	else if (age > 12 && age <= 54)
	{
		ticketPrice = PRICE; // Adult price
	}
	else
	{
		ticketPrice = PRICE * 0; // Senior price
	}

	return ticketPrice;
}