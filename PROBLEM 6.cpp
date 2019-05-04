#include <iostream>
#include <conio.h>

using namespace std;

int main ()
{
	int n=22, no1 = 0, no2 = 1, no3 = 0;
	
	cout << "Here are the 20 Fibonacci numbers: \n";
	
	
	for (int i = 1; i <= n; ++i)
	{
		if (i == 1)
		{
			cout << no1 << ",";
			continue;
		}
		
		if (i == 2)
		{
			cout << no2 << ",";
		}
		
			no3 = no1 + no2;
		no1 = no2;
		no2 = no3;
		
		cout << no3 << ",";
	}
	
	_getch ();
	return 0;
}
