// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q11
// ---------------------------------------------------------------------------
// Known Bugs:
// Test data 1: 10 5 15 should be 5, 10, 15
// Test data 2: 5 4 6 should be 4, 5, 6
// Test data 3: 4 4 10 should be 4, 4, 10
// Test data 4: 11 13 12 should be 11, 12, 13
// Test data 5: 3 5 15 should be Error
// Test data 6: 10 3 15 should be Error

#include <iostream>

int main11()
{
	int num1 = 0; // Variable to hold user input
	int num2 = 0; // Variable to hold user input
	int num3 = 0; // Variable to hold user input
	int temp = 0; // Temporary variable for swapping

	std::cout << "Sort Three Numbers in Ascending Order\n"; // Heading

	std::cout << "Enter first number (4 - 16): "; // Prompt for first number
    std::cin >> num1;

	std::cout << "Enter second number (4 - 16): "; // Prompt for second number
    std::cin >> num2;

	std::cout << "Enter third number (4 - 16): "; // Prompt for third number
    std::cin >> num3;

	if (num1 < 4 || num1 > 16 || num2 < 4 || num2 > 16 || num3 < 4 || num3 > 16) // Check if numbers are in the range of 4 to 16
    {
        std::cout << "Error. None of these numbers cannot be lower than 4 and higher than 16\n";
    }
    else //
    {
        //Sort the three numbers using comparison
		if (num1 > num2) // Compare num1 and num2
        {
			temp = num1; // Swap num1 and num2
			num1 = num2; // num1 now holds the smaller value
			num2 = temp; // num2 now holds the larger value
        }
		if (num1 > num3) // Compare num1 and num3
        {
			temp = num1; // Swap num1 and num3
			num1 = num3; // num1 now holds the smaller value
			num3 = temp; // num3 now holds the larger value
        }
		if (num2 > num3) // Compare num2 and num3
        {
			temp = num2; // Swap num2 and num3
			num2 = num3; // num2 now holds the smaller value
			num3 = temp; // num3 now holds the larger value
        }

		std::cout << num1 << ", " << num2 << ", " << num3 << std::endl; // Output the sorted numbers
    }
    system("pause");
    return 0;
}