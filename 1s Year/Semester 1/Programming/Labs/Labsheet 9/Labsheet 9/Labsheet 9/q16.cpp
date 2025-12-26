// Name: Vladyslav Sharapov
// login: c00325055
// Date: 26/11/25
// Approximate time taken: 10 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q16: Add Numbers in a Range
// ---------------------------------------------------------------------------
// Known Bugs: line 46 had (int total = total;) + t_startNum; instead of (total += t_startNum;)
// ---------------------------------------------------------------------------
// Test data 1: Start number: 3, End number: 6 -> The numbers are: 3 4 5 6, The sum is 18
// Test data 2: Start number: 1, End number: 1 -> The numbers are: 1, The sum is 1
// Test data 3: Start number: 5, End number: 3 -> The numbers are: , The sum is 0
// ---------------------------------------------------------------------------

#include <iostream>

void addNumbers(int t_startNum, int t_endNum);

int main16()
{
	int startNum = 0;
	int endNum = 0;

	std::cout << "Enter the start number : ";
	std::cin >> startNum;

	std::cout << "Enter the end number : ";
	std::cin >> endNum;

	addNumbers(startNum, endNum);

	std::cout << std::endl;
	system("Pause");
	return 0;
}

void addNumbers(int t_startNum, int t_endNum)
{
	int total = 0;

	std::cout << "The numbers are : ";

	while (t_startNum <= t_endNum)
	{
		std::cout << " " << t_startNum;  //write the number to the screen
		total += t_startNum;   // sum the values
		t_startNum++;
	}

	std::cout << std::endl;
	std::cout << "The sum is " << total;
}
