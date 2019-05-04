#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	int totalbill, gall, previous, recent, unpBal, totalbill2, charge, consumption, latecharge;
	charge = 35;
	consumption = 1.10;
	latecharge = 20;
	
	cout << "What is the meter reading (in gallons) taken last month?" << " "; cin >> previous;
	cout << "What is the meter reading (in gallons) taken this month?" << " "; cin >> recent;
	cout << "Enter your remaining balance: (none, enter 0)" << " "; cin >> unpBal;
	
	totalbill = charge + consumption*(recent-previous) + unpBal;
	
	
	if (unpBal > 0)
	{
		totalbill2 = totalbill + 20 + unpBal;
		cout << "Your total bill for the last month and this month is with your unpaid balance is:" << " " << totalbill2;
	}
	else
	{
		cout << "Your total bill for the last month and this month is:" << " " << totalbill;
	}
	
	
	_getch();
	return 0;
}
