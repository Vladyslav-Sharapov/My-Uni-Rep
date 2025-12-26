// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Problem 2: Medicine Dispensing (Past Written Exam 1 Question)
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main2()
{
	float litres = 0.00f; // User input litres
	float mililitres = 0.00f; // Mililitres
    float mil_for_inj = 0.00f; // Mililitres for Injection
	float injectionsTotal = 0.00f; // Total Injections

    std::cout << "Medicine Dispensing" << std::endl; // Heading
	std::cout << "Please enter amount of litres: " << std::endl; // Prompt for litres
	std::cin >> litres; // Input litres
	std::cout << "Please enter amount of mililitres per injection: " << std::endl; // Prompt for mililitres per injection
	std::cin >> mil_for_inj; // Input mililitres per injection

	mililitres = litres * 1000; // Convert litres to mililitres

    while (true) //Loop
    {
        if (mililitres < mil_for_inj) //If amount of mililitres left less than mililitres for injection == stop the loop
        {
            break; //breaks the loop
        }
        else
        {
            mililitres = mililitres - mil_for_inj; //basic calculation
            injectionsTotal++; // ads 1 to total
        }
    }

	std::cout << "Total amount of injections: " << injectionsTotal << std::endl; // Output total amount of injections
	std::cout << "Medicine left: " << mililitres << std::endl; // Output medicine left in mililitres

    system("pause");
    return 0;
}
