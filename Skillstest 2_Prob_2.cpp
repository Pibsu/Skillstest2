#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int x, n;
	cout << "Please enter a number: "; cin >> x;
	cout << "Multiplication by " << x << endl;

	n = 0;
	while (n <= 10)
	{
		cout << x << " x " << n << " = "<< n * x << endl;
		n++;
	}
	cout << "Please memorize it.";
	getch();
	return 0;
}
