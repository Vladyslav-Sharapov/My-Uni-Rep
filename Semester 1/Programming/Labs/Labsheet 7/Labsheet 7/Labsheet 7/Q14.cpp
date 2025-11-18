// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 50 min
//----------------------------------------------------------------------------
// Program: Labsheet 7: Q14
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data
// 1: €500, 0 claims == €525.00
// 2: €500, 1 claim  == €787.50
// 3: €500, 2 claims == €1050.00
// 4: €300, 3 claims == €630.00
// 5: €-100, 1 claim == Error
// 6: €0, 0 claims   == Error
// ---------------------------------------------------------------------------
#include <iostream>

int main14()
{
	double last_year_premium, base_premium, new_premium, renewal_premium; // Variables to hold user input and calculated premiums
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
        // Step 1: Convert to base premium before bonus
        base_premium = last_year_premium * 2;

        // Step 2: Add 5% increase
        new_premium = base_premium * 1.05;

        // Step 3: Apply bonus/penalty based on claims
        if (number_of_claims == 0) 
        {
            renewal_premium = new_premium * 0.5; // full 50% bonus
        }
        else if (number_of_claims == 1) 
        {
            renewal_premium = new_premium * 0.75; // lose half of bonus
        }
        else 
        {
            renewal_premium = new_premium; // lose all bonus
        }

        std::cout << "Your renewal premium is: " << renewal_premium << std::endl;
    }

    system("pause");
    return 0;
}
