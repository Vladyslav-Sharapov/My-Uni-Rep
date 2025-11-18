// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 03/11/25
// Approximate time taken: 20 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q14 Calculation the insurance premium for the coming year
// ---------------------------------------------------------------------------
// Known Bugs: None
//----------------------------------------------------------------------------
// Test data 1: 0 0 should be Error
// Test data 2: -100 2 should be Error
// Test data 3: 200 0 should be 210
// Test data 4: 150 1 should be 236.25
// Test data 5: 300 3 should be 630
//----------------------------------------------------------------------------

#include <iostream>

void calculatePremium(double t_last_year_premium, int t_number_of_claims);

int main()
{
	double last_year_premium = 0.0; // Variables to hold user input and calculated premiums
	int number_of_claims = 0; // Variable to hold number of claims

	std::cout << "Enter last year's premium: ";
	std::cin >> last_year_premium; // Step 0: Get last year's premium

	std::cout << "Enter the number of claims made: ";
	std::cin >> number_of_claims; // Step 0: Get number of claims

	if (last_year_premium <= 0 || number_of_claims < 0) // Validate input
	{
		std::cout << "Error. Invalid input values." << std::endl;
	}
	else
	{
		calculatePremium(last_year_premium, number_of_claims);
	}
	system("pause");
	return 0;
}

void calculatePremium(double t_last_year_premium, int t_number_of_claims) // Function to calculate the renewal premium
{
	double base_premium = 0.0; // Base premium before increase
	double new_premium = 0.0; // Premium after 5% increase
	double renewal_premium = 0.0; // Final renewal premium after bonus/penalty

    // Step 1: Convert to base premium before bonus
    base_premium = t_last_year_premium * 2;

    // Step 2: Add 5% increase
    new_premium = base_premium * 1.05;

    // Step 3: Apply bonus/penalty based on claims
    if (t_number_of_claims == 0)
    {
        renewal_premium = new_premium * 0.5; // full 50% bonus
    }
    else if (t_number_of_claims == 1)
    {
        renewal_premium = new_premium * 0.75; // lose half of bonus
    }
    else
    {
        renewal_premium = new_premium; // lose all bonus
    }

    std::cout << "Your renewal premium is: " << renewal_premium << std::endl;
}