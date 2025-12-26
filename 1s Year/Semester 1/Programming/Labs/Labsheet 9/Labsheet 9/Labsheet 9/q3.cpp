// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 19/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q3: Generate and display 10 random numbers between 1 and 40 
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data: N/A
// ---------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>

void generateRandom();

int main3()
{
	generateRandom(); // Call the function to generate and display random numbers
	system("pause");
	return 0;
}

void generateRandom()
{
	srand(static_cast<unsigned int>(time(0))); // Seed the random number generator
	for (int i = 0; i < 10; i++)
	{
		int randomNum = rand() % 40 + 1; // Generate random number between 1 and 40
		std::cout << "Random number " << i + 1 << ": " << randomNum << std::endl;
	}
}