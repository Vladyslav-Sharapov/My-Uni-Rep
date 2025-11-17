// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 17/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 8 - Q5: Deal a Card (random)
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data 1: King of Hearts
// Test data 2: 7 of Diamonds
// Test data 3: Ace of Spades
// Test data 4: 3 of Clubs
// Test data 5: 10 of Hearts
//----------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

std::string getCardSuit();
std::string getCardFace();

int main6() 
{
	std::srand(static_cast<unsigned int>(std::time(0))); // Seed random number generator with current time
    int numCards;

	std::cout << "How many cards would you like to be dealt? ";
	std::cin >> numCards; // Get number of cards to deal
    if (numCards <= 0)
    {
        std::cout << "It's impossible to give you 0 or less cards\n";
    }
    else
    {
        for (int i = 0; i < numCards; ++i)
        {
            // Get a random card suit and face
            std::string suit = getCardSuit();
            std::string face = getCardFace();

            std::cout << "You have been dealt the " << face << " of " << suit << "." << std::endl; // Output the result


        }
    }
	
	system("pause");
    return 0;
}

std::string getCardSuit() 
{
	int suitNum = rand() % 4 + 1; // Random number between 1 and 4
    std::string suit;

	switch (suitNum) // Determine suit based on random number
    {
        case 1: suit = "Hearts"; break;
        case 2: suit = "Diamonds"; break;
        case 3: suit = "Clubs"; break;
        case 4: suit = "Spades"; break;
        default: suit = "Unknown"; break;
    }

    return suit;
}
std::string getCardFace() 
{
	int rank = rand() % 13 + 1; // Random number between 1 and 13
    std::string face;
    switch (rank) 
    {
        case 10: face = "Jack"; break;
        case 11: face = "Queen"; break;
        case 12: face = "King"; break;
        case 13: face = "Ace"; break;
        default: face = std::to_string(rank); break;
    }
    return face;
}