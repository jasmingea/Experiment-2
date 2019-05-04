#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int packA, packB, packC, hours, totalAmountDue;
	char package;
	
	const int packageA = 995;
	const int packageB = 1495;
	const int packageC = 1995;
	
	packA = (((hours-10)*20) + packageA);
	packB = (((hours-20)*10) + packageB);
	
	cout << "Welcome our dear customer!" << endl;
	cout << "Below are three different packages you can choose from:" << endl;
	cout << "Package A: 995 per month, 10 hours of access are provided. Additional hours cost P20/hour." << endl;
	cout << "Package B: 1495 per month, 20 hours of access are provided. Additional hours cost P10/hour." << endl;
	cout << "Package C: 1995 per month, unlimited access are provided." << endl;
	
	cout << "Please enter your chosen package: (Ex.:A)"; cin >> package;
	
	if ((package == 'A') || (package == 'B') || (package == 'C'))
	{
		cout << "Enter number of hours consumed in a month:"; cin >> hours;
		if (hours > 744 || hours < 1)
		cout << "The entered hours is invalid." << endl;
	}
	
	switch (package)
	{
		case 'A':
			if (hours <= 10)
			cout << "Your Total amount due this month is: " << packageA << endl;
			if (hours > 10)
			cout << "Your Total amount due this month is: " << packA << endl;
			break;
			
		case 'B':
			if (hours <= 20)
			cout << "Your Total amount due this month is: " << packageB << endl;
			if (hours > 20)
			cout << "Your Total amount due this month is: " << packB << endl;
			break;	
		
		case 'C':
			if (hours <= 744)
			cout << "Your Total amount due this month is: " << packageC << endl;
			
		defualt:
			if (hours > 744)
			cout << "The entered number of hours is invalid." << endl;
			
	}
	_getch ();
	return 0;
	
}
