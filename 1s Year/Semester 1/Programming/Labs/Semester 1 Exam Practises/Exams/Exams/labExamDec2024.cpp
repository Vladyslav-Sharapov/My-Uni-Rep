// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 26/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Emax Practice - Dec 2024
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------

#include <iostream>
#include <string>


float processGradeInputs(int t_maxNums, std::string t_firstName);

int main()
{
	int maxNums = 0;
	std::string firstName;

	std::cout << "How many expam grades would you like to enter: ";
	std::cin >> maxNums;

	std::cout << "What is your first name: ";
	std::cin >> firstName;

	if (maxNums < 1 && maxNums > 150) // Error check
	{
		std::cout << "Error - you must enter a number beetween 1 - 150";
	}
	else // if no error
	{
		float average = processGradeInputs(maxNums, firstName);
		std::cout << "The average distinction exam grade is: " << average << "\n\n";
	}
	
	system("pause");
	return 0;
}

float processGradeInputs(int t_maxNums, std::string t_firstName)
{
	int grades = 0; // other grades
	int distinction = 0; // 70 - 100
	int failed = 0; // 0 - 39
	int lowest = 0; // lowest grade
	int numLowest = 1; // count for same lowest
	int numErrors = 0;
	float sum = 0;

	for (int i = 0; i < t_maxNums;)
	{

		while (true) // Infinity loop if incorrect input
		{
			std::cout << t_firstName << " enter exam grade " << i + 1 << ": ";
			std::cin >> grades;

			if (grades > 0 && grades < 100) // Breaks loop if input is correct
			{
				break;
			}
			std::cout << "Error - each exam grade must be between 0 - 100. Please reenter\n";
			numErrors++;
		}
		if (i == 0) // set lowest grade;
		{
			lowest = grades;
		}
		else if (grades == lowest) // if occurs the same lowest
		{
			numLowest++;
		}

		if (grades >= 70 && grades <= 100) // distinction
		{
			distinction++;
		}
		if (grades >= 0 && grades < 40) // fail;
		{
			failed++;
		}
		if (grades < lowest) // check on lowest
		{
			lowest = grades; // st lowest
			numLowest = 1; // reset count
		}

		sum += grades; // sum grades
		i++;
	}

	std::cout << "\nThe number of students who got a distinction is: " << distinction << std::endl;
	std::cout << "The number of students who failed is: " << failed << std::endl;
	std::cout << "The lowest grade is: " << lowest << std::endl;
	std::cout << "The number of times the lowest grade occured: " << numLowest << std::endl;
	std::cout << "The number of incorrect exam grade inputs is: " << numErrors << std::endl;

	float average = sum / t_maxNums; // calculate average

	return average;
}