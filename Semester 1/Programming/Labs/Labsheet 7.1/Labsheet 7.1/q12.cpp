// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 03/11/25
// Approximate time taken: 15 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q12 Calculation credit card interest
// ---------------------------------------------------------------------------
// Known Bugs: None
//----------------------------------------------------------------------------
// Test data 1: -100 should be Error
// Test data 2: 0 should be Error
// Test data 3: 100 should be 12
// Test data 4: 500 should be 60
// Test data 5: 600 should be 78
// Test data 6: 1000 should be 150
//----------------------------------------------------------------------------

#include <iostream>

void calculateInterest(double t_bill_amount, double t_interest);

int main12()
{
	double bill_amount = 0.0;
    double interest = 0.0;

    std::cout << "Enter the amount of your credit card bill: ";
    std::cin >> bill_amount;

    if (bill_amount <= 0) // Check if bill_amount is less or equal to 0
    {
        std::cout << "Error. Bill cannot be less or equal to zero\n";
    }
    else
    {
        calculateInterest(bill_amount, interest);
    }

	system("pause");
	return 0;
}

void calculateInterest(double t_bill_amount, double t_interest) // Function to calculate interest based on bill amount
{
    if (t_bill_amount <= 500) // Check if bill_amount is less or equal to 500
    {
        t_interest = t_bill_amount * 0.12; // 12% interest
        std::cout << "Total interest due: " << t_interest << std::endl;
    }
    else // Calculate interest for bill_amount greater than 500
    {
        t_interest = (500 * 0.12) + ((t_bill_amount - 500) * 0.18); // 12% on first 500 and 18% on the rest
        std::cout << "Total interest due: " << t_interest << std::endl;
    }
}