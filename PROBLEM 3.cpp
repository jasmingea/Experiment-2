#include <iostream>
#include <conio.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{
	int x,y;
	float v;
	const float z = 2.5;
	
	cout << "Enter the X value: "; cin >> x;
	
	if ((x == 1) || ( x == 2))
	cout << "Enter Y value: "; cin >> y;
	
	switch (x)
	{
		case 1:
			
			if (x = 1 && 1 < y < 5)
			{
				v = (x*y*z);
				cout << "The value of V is" << v << endl;
			}
		
		case 2:
			
			if (x = 1 && y >= 5)
			{
				v = (x + (y/z));
				cout << "The value of V is" << " " << v << endl;
			}
		
		case 3:
			
			if (x = 2 && y <= 5)
			{
				v = ((x - y)/z);
				cout << "The value of V is" << " " << v << endl;
			}
		
		case 4:
			if (x = 2 && y > 5)
			{
				v = (x - (sqrt(y+z)));
				cout << "The value of V is" << " " << v << endl;
				
				break;
				
				default:
				if (x >= 3 && y > 5)
				{
					v = (x + y + z);
					cout << "The value of V is" << " " << v << endl;
				}
			}
			}
		_getch();
		return 0;
	}
