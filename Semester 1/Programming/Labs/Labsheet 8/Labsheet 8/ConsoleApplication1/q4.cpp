// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q4: Exam Grades
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: 85 -> Distinction
// Test data 2: 69 -> Merit
// Test data 3: 54 -> Pass
// Test data 4: 39 -> Fail
// Test data 5: 105 -> Error message
// Test data 6: -5 -> Error message
// ---------------------------------------------------------------------------

#include <iostream>
#include <string>

std::string gradeCalculator(int score);

int main4()
{
	int score; // Exam score input
	std::string grade; // Grade output

	bool validInput; // Input validation flag

	std::cout << "Enter the exam score (0-100): ";
	std::cin >> score;
	if (score < 0 || score > 100) // Invalid input check
	{
		validInput = false; // Set flag to false
		std::cout << "Error: Please enter a score between 0 and 100." << std::endl;
	}
	else // Valid input
	{
		validInput = true; // Set flag to true

		grade = gradeCalculator(score); // Call function to calculate grade
		std::cout << "The grade for a score of " << score << " is: " << grade << std::endl;
	}
	system("pause");
	return 0;
}

std::string gradeCalculator(int score)
{
	std::string grade;

	if (score < 40)
	{
		grade = "Fail";
	}
	else if (score >=40 && score <55)
	{
		grade = "Pass";
	}
	else if (score >=55 && score< 70)
	{
		grade = "Merit";
	}
	else
	{
		grade = "Distinction";
	}

	return grade;
}