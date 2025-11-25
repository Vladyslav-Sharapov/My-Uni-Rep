// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 24/11/25
// Approximate time taken: 15 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q13:
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------

#include <iostream>
using namespace std;

void findOccurences();

int main13()
{
    findOccurences();
    system("pause");
    return 0;
}


void findOccurences() 
{
	int num; // number of inputs
    cout << "How many numbers do you want to enter? ";
    cin >> num;

    while (!(cin >> num) || num < 0)
    {
        cout << "Error"; 
        cout << "How many numbers do you want to enter? ";
        cin >> num;
    }

	int value; // user input value
    int first = 0;   // position of first occurrence of 9
    int last = 0;    // position of last occurrence of 9

    for (int i = 1; i <= num; i++) 
    {
        cout << "Enter number " << i << ": ";
        cin >> value;

		if (value == 9)  // check for occurrence of 9
        {
			if (first == 0) // first occurrence
            {
                first = i;   // first time seeing a 9
            }
            last = i;        // updates every time we see a 9
        }
    }

    cout << "First occurrence of 9: " << first << endl;
    cout << "Last occurrence of 9: " << last << endl;
}