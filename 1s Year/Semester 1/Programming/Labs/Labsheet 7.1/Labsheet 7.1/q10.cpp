// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/10/25
// Approximate time taken: 20 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q9 10 euro notes to 1 euro coins
// ---------------------------------------------------------------------------
// Known Bugs: None
//----------------------------------------------------------------------------
// Test data 1: 57 should be 5, 10 euro notes and 7, 1 euro coins
// Test data 2: -4 should be Error
// Test data 3: 0 should be Error
// Test data 4: 23 should be 2, 10 euro notes and 3, 1 euro coins
// Test data 5: 10 should be 1, 10 euro notes and 0, 1 euro coins
//----------------------------------------------------------------------------

#include <iostream>

void calculateEuroNotes(int t_amount);

int main10()
{
    int amount = 0; // Variable to hold user input

    std::cout << "Enter the amount in euro: ";
    std::cin >> amount; // Get user input

    if (amount <= 0) // Check if amount is less or equal to 0
    {
        std::cout << "Error. Number cannot be less than zero" << std::endl;
    }
    else
    {
        calculateEuroNotes(amount);
    }

    system("pause");
    return 0;
}

// Define t_amount as an int type for function parameter
void calculateEuroNotes(int t_amount)
{
    int ten_notes = t_amount / 10; // Variable to hold number of 10 euro notes
    int one_coin = t_amount % 10; // Variable to hold number of 1 euro coins

    std::cout << "You have " << ten_notes << ", 10 euro notes and "
        << one_coin << ", 1 euro coins" << std::endl;
    // Function body can be implemented as needed
}