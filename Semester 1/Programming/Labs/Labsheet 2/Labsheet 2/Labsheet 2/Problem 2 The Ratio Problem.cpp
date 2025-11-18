// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 5 min
//---------------------------------------------------------------------------
// Program: Problem 2: The Ratio Problem
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main2()
{
    float disk = 0.0f; // Variable for user total disc size

	float nick = 0.0f; // Variable for Nick's disc size
	float nick_ratio = 0.0f; // Variable for Nick's disc size ratio

	float alf = 0.0f; // Variable for Alf's disc size
	float alf_ratio = 0.0f; // Variable for Alf's disc size ratio

	float total_ratio = 0.0f; // Variable for total ratio

    std::cout << "Please enter you disk size in GB: " << std::endl;
    std::cin >> disk; // Input user's disc size

    std::cout << "Please enter ratio of Nick's disk size: " << std::endl;
	std::cin >> nick_ratio; // Input Nick's disc size ratio

    std::cout << "Please enter ratio of Alf's disk size: " << std::endl;
	std::cin >> alf_ratio; // Input Alf's disc size ratio

    // Calculating
	total_ratio = nick_ratio + alf_ratio; // Total ratio is the sum of Nick's and Alf's ratios
    
	nick = (nick_ratio / total_ratio) * disk; // Nick's disc size is calculated based on his ratio
	alf = (alf_ratio / total_ratio) * disk; // Alf's disc size is calculated based on his ratio

    // Displaying total answer
    std::cout << "Your disk size is: " << disk << std::endl;
    std::cout << "Nick's disk size is: " << nick << std::endl;
    std::cout << "Alf's disk size is: " << alf << std::endl;

    system("pause");
    return 0;
}