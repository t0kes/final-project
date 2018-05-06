#include <iostream>
#include <iomanip>
using namespace std;

void menu();
void processChoice(int);


// Constants for membership rates
const double ADULT_RATE = 40.0;
const double CHILD_RATE = 20.0;
const double SENIOR_RATE = 30.0;

int choice;           // Menu choice
int months;           // Number of months
double charges;       // Monthly charges

int main()
{
	do
	{
		menu();

		processChoice(choice);
	}
	while (choice != 4);
	system("pause");
	return 0;
}

void processChoice( int ch)

{
	
	if (ch != 4)
	{
		cout << "For how many months? ";
		cin >> months;
	}

	cin >> months;

	switch (ch)
	{
	case 1: charges = months * ADULT_RATE;
		break;
	case 2: charges = months * CHILD_RATE;
		break;
	case 3: charges = months * SENIOR_RATE;
	}

	
}

void menu()
{
		cout << "\n   Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;

		while ((choice < 1) || (choice > 4))
		{
			cout << "Please enter 1, 2, 3, or 4: ";
			cin >> choice;

		}

		
}
