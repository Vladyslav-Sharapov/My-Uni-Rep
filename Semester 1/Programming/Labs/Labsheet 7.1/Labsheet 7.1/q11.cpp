// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/10/25
// Approximate time taken: 15 min
//----------------------------------------------------------------------------
// Program: Labsheet 7.1: Q11 3 numbers sorted in ascending order
// ---------------------------------------------------------------------------
// Known Bugs: None
//----------------------------------------------------------------------------
// Test data 1: 5 3 8 should be 3 5 8
// Test data 2: 16 4 10 should be 4 10 16
// Test data 3: 2 5 7 should be Error
// Test data 4: 12 14 11 should be 11 12 14
// Test data 5: 9 9 9 should be 9 9 9
//----------------------------------------------------------------------------

#include <iostream>

void sortNumbers(int t_num1, int t_num2, int t_num3);

int main11()
{
	int num1, num2, num3;
	
	std::cout << "Enter three numbers (4 - 16): ";
	std::cin >> num1 >> num2 >> num3;
	
	if ((num1 < 4 || num1 > 16) || (num2 < 4 || num2 > 16) || (num3 < 4 || num3 > 16))
	{
		std::cout << "Error. Numbers must be in the range of 4 to 16." << std::endl;
	}
	else
	{
		sortNumbers(num1, num2, num3);
	}

	system("pause");
	return 0;
}

void sortNumbers(int t_num1, int t_num2, int t_num3)
{
	int temp;

	//Sort the three numbers using comparison
	if (t_num1 > t_num2) // Compare num1 and num2
	{
		temp = t_num1; // Swap num1 and num2
		t_num1 =t_num2; // num1 now holds the smaller value
		t_num2 = temp; // num2 now holds the larger value
	}
	if (t_num1 > t_num3) // Compare num1 and num3
	{
		temp = t_num1; // Swap num1 and num3
		t_num1 = t_num3; // num1 now holds the smaller value
		t_num3 = temp; // num3 now holds the larger value
	}
	if (t_num2 > t_num3) // Compare num2 and num3
	{
		temp = t_num2; // Swap num2 and num3
		t_num2 = t_num3; // num2 now holds the smaller value
		t_num3 = temp; // num3 now holds the larger value
	}

	std::cout << "Numbers in ascending order: " << t_num1 << " " << t_num2 << " " << t_num3 << std::endl;
}