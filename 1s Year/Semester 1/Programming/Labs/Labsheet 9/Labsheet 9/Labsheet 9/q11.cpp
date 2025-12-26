// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 24/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q11: Displaying Digits in Reverse Order
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test Data 1: // Input: 9 // Expected Output: 9 6 3 0 Sum: 18 Average: 4.5
// Test Data 2: // Input: 19 // Expected Output: 19 16 13 10 7 4 1 Sum: 70 Average: 10
// Test Data 3: // Input: 3 // Expected Output: 3 0 Sum: 3 Average: 1.5
// Test Data 4: // Input: 0 // Expected Output: (Invalid input message)
// Test Data 5: // Input: -5 // Expected Output: (Invalid input message)
// ---------------------------------------------------------------------------


#include <iostream>

void reverseDisplay(int tNum);

int main11()
{
	int num = 0;

	std::cout << "Enter a positive integer: ";
	std::cin >> num;

	while (num <= 0) // Input validation
	{
		std::cout << "Invalid input. Please enter a positive integer." << std::endl;
		std::cout << "Enter a positive integer: ";
		std::cin >> num;
	}

	reverseDisplay(num);

	system("pause");
	return 0;
}

void reverseDisplay(int tNum) // Function to display digits in reverse order
{
	const int MINUS_NUM = 3; // Constant to subtract

	int count = 1;
	float sum = tNum;
	float average = 0.0f;

	while (tNum >= -1) // Loop until tNum is less than or equal to 0
	{
		std::cout << tNum << " ";
		tNum -= MINUS_NUM; // Subtract 3 from tNum
		if (tNum < 0) // Check if tNum is negative
		{
			std::cout << std::endl;
			break; // Exit loop if negative
		}
		sum += tNum; // Add tNum to sum
		count++; // Increment count
	}

	average = sum / count; // Calculate average

	std::cout << "Sum: " << sum << std::endl;
	std::cout << "Average: " << average << std::endl;
}