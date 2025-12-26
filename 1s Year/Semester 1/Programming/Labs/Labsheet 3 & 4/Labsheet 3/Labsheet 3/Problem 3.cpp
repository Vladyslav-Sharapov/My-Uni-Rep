// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Problem 3: Income Tax
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main3()
{
	float gross_income = 0.00f; // User input gross income
	float tax = 0.00f; // Tax amount
	float taxable_income = 0.00f; // Taxable income
	float net_pay = 0.00f; // Net pay after tax

    std::cout << "Income Tax" << std::endl; // Heading
	std::cout << "Please enter your income: " << std::endl; // Prompt for income
	std::cin >> gross_income; // Input income
	std::cout << "Please enter width of the room: " << std::endl; // Prompt for width
    
    if (gross_income <= 12000) // no tax if income less than €12,000
    {
		tax = 0; // no tax
    }
    else
    {
		taxable_income = gross_income - 12000; // taxable income is income - 12000
        tax = taxable_income * 0.22; // 22% of taxable income
    }

	net_pay = gross_income - tax; // net pay is income - tax

	std::cout << "Income: " << gross_income << std::endl; // Output income
	std::cout << "Tax due: " << tax << std::endl; // Output tax
	std::cout << "Net pay: " << net_pay << std::endl; // Output net pay

    system("pause");
    return 0;
}
