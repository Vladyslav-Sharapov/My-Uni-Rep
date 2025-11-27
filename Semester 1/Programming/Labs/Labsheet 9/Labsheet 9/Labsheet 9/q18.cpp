// Name: Vladyslav Sharapov
// Login: c00325055
// Date: 26/11/25
// Approximate time taken: 20 min
// ---------------------------------------------------------------------------
// Program: Labsheet 9 - Q18: Vessel Calculations
// ---------------------------------------------------------------------------
// Known Bugs: None
// ---------------------------------------------------------------------------
// Test data: Tested with various heights and radius values
// ---------------------------------------------------------------------------

#include <iostream>
using namespace std;

void menu(double t_height, double t_radius);
void volumeSphere(double radius);
void surfaceAreaSphere(double radius);
void volumeCylinder(double height, double radius);
void surfaceAreaCylinder(double height, double radius);

const double PI = 3.14159; // Define constant for pi

int main18()
{
	double height = 0.0, radius = 0.0;

	while (true)
	{
		system("cls"); // Clear the console screen

		cout << "To exit, enter a negative value for height and radius." << endl; // Exit condition
		cout << "-----------------------------------------------" << endl; // Separator line

		cout << "\nEnter height of the vessel: ";
		cin >> height;

		cout << "Enter radius of the vessel: ";
		cin >> radius;
		
		if (height < 0 && radius < 0) // Check for exit condition
		{
			cout << "\nExiting program...\n" << endl;
			break; // Exit the loop and program
		}

		menu(height, radius); // Call menu function

		system("pause");
	}
	

	return 0;
}

void menu(double t_height, double t_radius) // Display menu options
{
	int choice = 0;

	cout << "\nWhat are you going to calculate?" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "1. The volume of a sphere\n2. The surface area of a sphere\n3. The volumme of a cylinder\n4. The surface area of a cylinder" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Enter your choice (1-4): ";
	cin >> choice;
	cout << "-----------------------------------------------" << endl;

	switch (choice) // Handle user choice
	{
	case 1: // Volume of sphere
		volumeSphere(t_radius);
		break;

	case 2: // Surface area of sphere
		surfaceAreaSphere(t_radius);
		break;

	case 3: // Volume of cylinder
		volumeCylinder(t_height, t_radius);
		break;

	case 4: // Surface area of cylinder
		surfaceAreaCylinder(t_height, t_radius);
		break;

	default:
		cout << "Invalid choice." << endl;
		break;
	}
	cout << "-----------------------------------------------" << endl;
}

void volumeSphere(double t_radius) // Calculate volume of sphere
{
	double volume = (4.0 / 3.0) * PI * t_radius * t_radius * t_radius;
	cout << "# The volume of the sphere is: " << volume << endl;
}

void surfaceAreaSphere(double t_radius) // Calculate surface area of sphere
{
	double surfaceArea = 4 * PI * t_radius * t_radius;
	cout << "# The surface area of the sphere is: " << surfaceArea << endl;
}

void volumeCylinder(double t_height, double t_radius) // Calculate volume of cylinder
{
	double volume = PI * t_radius * t_radius * t_radius;
	cout << "# The volume of the cylinder is: " << volume << endl;
}

void surfaceAreaCylinder(double t_height, double t_radius) // Calculate surface area of cylinder
{
	double surfaceArea = 2 * PI * t_radius * (t_radius + t_height);
	cout << "# The surface area of the cylinder is: " << surfaceArea << endl;
}