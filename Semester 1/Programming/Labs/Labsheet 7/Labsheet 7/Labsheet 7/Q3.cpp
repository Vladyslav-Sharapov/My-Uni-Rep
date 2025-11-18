// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 13/10/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Labsheet 7: Q3
// ---------------------------------------------------------------------------
// Known Bugs:
// No error cheking for user input

#include <iostream>

int main3()
{
    int user_grade = 0; // User input grade

    std::cout << "Exam Grades" << std::endl; // Heading
    std::cout << "Please enter your grade: " << std::endl; // Prompt for grade
    std::cin >> user_grade; // Input grade

    if (user_grade >= 0 && user_grade < 40) //check for fail
    {
        std::cout << "You successfully fail the exam" << std::endl; //fail
    }
    else if (user_grade >= 40 && user_grade < 55)//check for pass
    {
        std::cout << "You got Pass on the exam" << std::endl; //pass
    }
    else if (user_grade >= 55 && user_grade < 70)//check for merit
    {
        std::cout << "You got Merit on the exam" << std::endl; //merit
    }
    else if (user_grade >= 70 && user_grade <= 100)//check for distiction
    {
        std::cout << "You got Distiction on the exam" << std::endl; //distinction
    }
    else //Error check
    {
        std::cout << "Appropriate error message" << std::endl; //error message
    }

    system("pause");
    return 0;
}
