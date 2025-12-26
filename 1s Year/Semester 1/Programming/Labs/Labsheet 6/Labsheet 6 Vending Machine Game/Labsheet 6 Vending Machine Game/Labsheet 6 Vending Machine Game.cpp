// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 06/10/25
// Approximate time taken: 1h
//---------------------------------------------------------------------------
// Program: Labsheet: 6 Vending Machine Game
// ---------------------------------------------------------------------------
// Known Bugs:
// None
#include <iostream>

int main()
{
    int user_coins = 0;
    int item_cost = 0;

    std::cout << "Vending Machine Game" << std::endl; // Heading
    std::cout << "Please enter your amount of cents: ";
    std::cin >> user_coins;

    if (user_coins <= 0) // Check if number of coins equals 0 or negative
    {
        std::cout << "You entered incorrect number of coins" << std::endl;
        std::cout << "Please try again \n" << std::endl;
        main(); //start main again
    }
    else;

    std::cout << "Select the item cost(in cents): ";
    std::cin >> item_cost;

    if (item_cost <= 0) // Check if price equals 0 or negative
    {
        std::cout << "You entered incorrect price" << std::endl;
        std::cout << "Please try again \n" << std::endl;
        main(); //start main again
    }
    else if (item_cost > user_coins) // Check if price higher than coins user entered
    {
        std::cout << "Price can't be higher than you have money" << std::endl;
        std::cout << "Please try again \n" << std::endl;
        main(); //start main again
    }
    else;

    int total_coins = user_coins - item_cost; // simple calculation

    int cent_100 = total_coins / 100; //devide total coins to 100, 200/100 = 2
    total_coins %= 100; //showing rest of the coins (I don't know how to explain...)
    int cent_50 = total_coins / 50;
    total_coins %= 50;
    int cent_20 = total_coins / 20;
    total_coins %= 20;
    int cent_10 = total_coins / 10;
    total_coins %= 10;
    int cent_5 = total_coins / 5;
    total_coins %= 5;
    int cent_2 = total_coins / 2;
    total_coins %= 2;
    int cent_1 = total_coins;

    //Output
    std::cout << "Number of coins by 100c: " << cent_100 << std::endl;
    std::cout << "Number of coins by 50c: " << cent_50 << std::endl;
    std::cout << "Number of coins by 20c: " << cent_20 << std::endl;
    std::cout << "Number of coins by 10c " << cent_10 << std::endl;
    std::cout << "Number of coins by 5c: " << cent_5 << std::endl;
    std::cout << "Number of coins by 2c: " << cent_2 << std::endl;
    std::cout << "Number of coins by 1c: " << cent_1 << std::endl;

    system("pause");
    return 0;
}