// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q4: Generate 10 random even numbers between 10 and 50
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: 22, 14, 36, 48, 10, 28, 40, 12, 30, 50 sum = 290
// Test data 2: 18, 20, 32, 14, 26, 44, 38, 12, 16, 50 sum = 270
// ---------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>

int generateRandomEven();

int main4()
{
	int sum = generateRandomEven(); // Call the function to generate random even numbers and get the sum

	std::cout << "The sum of the even random numbers is: " << sum << std::endl;

	system("pause");
	return 0;
}

int generateRandomEven() // Function to generate 10 random even numbers between 10 and 50
{
	int sum = 0;

	srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
	for (int i = 1; i <= 10; i++)
	{
		int randomNum = rand() % 41 + 10; // Generate random number between 10 and 50   
		if (randomNum % 2 == 0) // Check if the number is even
		{
			std::cout << "Random even number " << i << ": " << randomNum << std::endl; // Display the random even number
			sum += randomNum; // Add the even number to the sum
		}
		else
		{
			i--; // Decrement i to ensure we get 10 even numbers
		}
	}

	return sum;
}