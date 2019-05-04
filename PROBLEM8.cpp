#include <iostream>
#include <conio.h>

using namespace std;

int main ()

{
	int n;
	
	cout << "Please enter a positive integer:  ";
	cin >> n;
	
	for (int i = 1; i <=10; ++i)
	{
		cout << i << " * " << n << " = " << i * n << endl;
	}
	
	_getch();
	return 0;
}
