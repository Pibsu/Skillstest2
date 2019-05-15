#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, y, z;
	cout << "Please input 3 numbers separated by spaces below.\n";
	cin >> x >> y >> z;
	if (y < x && z < x)
		cout << "The largest number of the three is " << x << "." << endl;
	else if (x < y && z < y)
		cout << "The largest number of the three is " << y << "." << endl;
	else if (x < z && y < z)
		cout << "The largest number of the three is " << z << "." << endl;
	else if (x = y = z)
		cout << "The three numbers are equal." << endl;
	getch();
	return 0;
}