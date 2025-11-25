// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q5: Program that asks the user how many numbers and counts sum and odd numbers
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: 5 numbers: 10, 15, 22, 33, 40: Total sum = 120, Odd count = 2, Odd sum = 48
// Test Data 2: 3 numbers: 1, 3, 5: Total sum = 9, Odd count = 3, Odd sum = 9
// Test Data 3: 4 numbers: 2, 4, 6, 8: Total sum = 20, Odd count = 0, Odd sum = 0
// ---------------------------------------------------------------------------

#include <iostream>

void calculateNumbers(int count);

int main5()
{
	int count; // Number of inputs
	std::cout << "Enter how many numbers you want: ";
	std::cin >> count;

	if (count <= 0) // Validate input
	{
		std::cout << "Invalid input. Please enter a positive integer." << std::endl;
	}
	else
	{
		calculateNumbers(count);
	}
	
	system("pause");
	return 0;
}

void calculateNumbers(int count) // Function to calculate sums and count odd numbers
{
	int num;
	int sumAll = 0;
	int sumOdd = 0;
	int oddCount = 0;

	for (int i = 1; i <= count; i++) // Loop to get user inputs
	{
		std::cout << "Enter number" << i << ":";
		std::cin >> num;

		sumAll += num; // Add to total sum

		if (num % 2 != 0) // Check if the number is odd
		{
			oddCount++;
			sumOdd += num;
		}
	}

	std::cout << "\nTotal sum of all numbers: " << sumAll << std::endl;
	std::cout << "Number of odd numbers: " << oddCount << std::endl;
	std::cout << "Total sum of odd numbers: " << sumOdd << std::endl;

}