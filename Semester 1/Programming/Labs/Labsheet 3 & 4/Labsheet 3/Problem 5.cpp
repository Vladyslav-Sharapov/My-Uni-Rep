// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 22/09/25
// Approximate time taken: 10 min
//---------------------------------------------------------------------------
// Program: Problem 1: The Fly-Sugar problem
// ---------------------------------------------------------------------------
// Known Bugs:
// None

#include <iostream>

int main5()
{
    float length = 0.00f;
    float width = 0.00f;
    float height = 0.00f;
    float distance = 0.00f;
    float floor_area = 0.00f;

    std::cout << "Fly problem" << std::endl; // Heading
    std::cout << "Please enter length of the room: " << std::endl;
    std::cin >> length;
    std::cout << "Please enter width of the room: " << std::endl;
    std::cin >> width;
    std::cout << "Please enter height of the room" << std::endl;
    std::cin >> height;

    distance = std::sqrt((length * length) + (width * width) + (height * height));
    floor_area = length * width;

    std::cout << "Floor area of the room is: " << floor_area << std::endl;
    std::cout << "Shortest distance to the sugar is: " << distance << std::endl;

    system("pause");
    return 0;
}
