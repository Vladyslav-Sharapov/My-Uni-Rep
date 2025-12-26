// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q10: Student final grade calculator
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------

#include <iostream>
#include <string>

float calculateFinalGrade(float assignmentGrade, float finalExamGrade);

int main10()
{
	float assignmentGrade = 0.0f, finalExamGrade = 0.0f;
	std::string studentNumber;
	
	std::cout << "Enter the student number: ";
	std::cin >> studentNumber;

	std::cout << "Enter the assignment grade: ";
	std::cin >> assignmentGrade;

	std::cout << "Enter the final exam grade: ";
	std::cin >> finalExamGrade;
	
	if (assignmentGrade < 0.0f || assignmentGrade > 100.0f || finalExamGrade < 0.0f || finalExamGrade > 100.0f)
	{
		std::cout << "Error: Grades must be between 0 and 100." << std::endl;
	}
	else
	{
		float finalGrade = calculateFinalGrade(assignmentGrade, finalExamGrade); // 30% assignments, 70% final exam
		std::cout << "\nFinal Grade: " << finalGrade << "%" << std::endl;
	}
	return 0;
}

float calculateFinalGrade(float assignmentGrade, float finalExamGrade)
{
	return (0.3f * assignmentGrade) + (0.7f * finalExamGrade); // 30% assignments, 70% final exam
}