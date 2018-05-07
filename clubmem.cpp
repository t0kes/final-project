#include <iostream>
#include <iomanip>
using namespace std;

void menu();
void processChoice(int);
void dispMemCount();

int memCount[4] = {0,0,0,0};



const double ADULT_RATE = 40.0;
const double CHILD_RATE = 20.0;
const double SENIOR_RATE = 30.0;
const double FAMILY_RATE = 60.0;

int choice;          
int months;          
double charges;       

int main()
{
	do
	{
		menu();
		processChoice(choice);

		
	}

		while (choice != 5);
	
	system("pause");
	return 0;
}

void dispMemCount()
{
	cout << fixed << showpoint << setprecision(2);
	cout << "The total charges are $" << charges << endl;
}

void processChoice(int ch)

{
	
	if (ch != 5)
	{
		cout << "For how many months? ";
		cin >> months;



		switch (ch)
		{
		case 1: charges = months * ADULT_RATE;
			memCount[0] = memCount[0] + 1;
			break;
		case 2: charges = months * CHILD_RATE;
			memCount[1] = memCount[1] + 1;
			break;
		case 3: charges = months * SENIOR_RATE;
			memCount[2] = memCount[2] + 1;
			break;
		case 4: charges = months * FAMILY_RATE;
			memCount[3] = memCount[3] + 1;
			break;
		case 5: cout << "Your total Memberships are: \n" << memCount[0] << " Adult Mumberships\n" << memCount[1] << " Child Memberships\n" << memCount[2] << " Senior Memberships\n" << memCount[3]<<" Family Memberships\n";
			break;
		}
		dispMemCount();
	}
}

void menu()
{
		cout << "\n   Health Club Membership Menu\n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Family Membership\n"; 
		cout << "5. Quit the Program\n\n";
		cout << "Enter your choice: ";
		cin >> choice;

		while ((choice < 1) || (choice > 5))
		{
			cout << "Please enter 1, 2, 3, 4, or 5: ";
			cin >> choice;

		}

		
}
