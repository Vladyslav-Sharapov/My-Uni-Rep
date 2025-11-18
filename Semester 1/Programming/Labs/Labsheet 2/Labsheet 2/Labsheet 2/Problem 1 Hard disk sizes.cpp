// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 5 min
//---------------------------------------------------------------------------
// Program: Problem 1: Hard disk sizes
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main1()
{
    float disk = 0.0f; // Variable for user total disc size
	float nick = 0.0f; // Variable for Nick's disc size
	float alf = 0.0f; // Variable for Alf's disc size

    std::cout << "Please enter you disk size in GB: " << std::endl;
    std::cin >> disk; // Input user's disc size

    // Calculating
	nick = disk / 1.5; // Nick's disc size is 2/3 of the total disc size
	alf = disk / 3; // Alf's disc size is 1/3 of the total disc size

    // Displaying total answer
    std::cout << "Your disk size is: " << disk << std::endl;
    std::cout << "Nick's disk size is: " << nick << std::endl;
    std::cout << "Alf's disk size is: " << alf << std::endl;

    system("pause");
    return 0;
}