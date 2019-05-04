#include<iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main ()
{
	int l, j, rows, columns;
	
	cout << "Enter number of rows: " << endl;
	cin >> rows;
	cout << "Enter number of columns: "<< endl;
	cin >> columns;
	
	for (l = 1; l <= rows; l++);
	{
		for (j = 1; j <= columns; j++)
		{
			cout << "*";
		}
			cout << "\n";
		}	
		
		_getch ();
		return 0;
}
