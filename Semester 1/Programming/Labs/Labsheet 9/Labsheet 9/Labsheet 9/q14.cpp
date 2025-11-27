// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 24/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q14: Fibonacci Series
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data: 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765
// ---------------------------------------------------------------------------

#include <iostream>
using namespace std; // Importing the standard namespace

void fibonacciSeries(); // Function prototype

int main14()
{
	fibonacciSeries(); // Call the function to display Fibonacci series

	system("pause");
	return 0;
}

void fibonacciSeries() // Function to display Fibonacci series up to 20 terms
{
	for (int i = 1; i <= 20; i++) // Loop for 20 terms
	{
		int one = 1; // First Fibonacci number
		int num = 0; // Second Fibonacci number
		int next = 0; // Next Fibonacci number

		for (int j = 1; j <= i; j++)
		{
			next = one + num; // Calculate next Fibonacci number
			num = one; // Update num to previous one
			one = next; // Update one to next
		}
		cout << "Fibonacci number " << i << ": " << num << endl; // Display the Fibonacci number
	}
}