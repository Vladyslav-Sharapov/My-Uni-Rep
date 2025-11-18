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

int main()
{
    float gross_income = 0.00f;
    float tax = 0.00f;
    float taxable_income = 0.00f;
    float net_pay = 0.00f;

    std::cout << "Income Tax" << std::endl; // Heading
    std::cout << "Please enter your income: " << std::endl;
    std::cin >> gross_income;
    std::cout << "Please enter width of the room: " << std::endl;
    
    if (gross_income <= 12000) // no tax if income less than €12,000
    {
        tax = 0;
    }
    else
    {
        taxable_income = gross_income - 12000;
        tax = taxable_income * 0.22; // 22% of taxable income
    }

    net_pay = gross_income - tax;

    std::cout << "Income: " << gross_income << std::endl;
    std::cout << "Tax due: " << tax << std::endl;
    std::cout << "Net pay: " << net_pay << std::endl;

    system("pause");
    return 0;
}
