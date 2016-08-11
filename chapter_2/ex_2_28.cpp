#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int d;
	cout << "Enter a number (five digits): ";
	cin >> d;
	cout << "\nThe result is: ";
	cout << d / 10000 << "   ";
	d = d % 10000;
	cout << d / 1000 << "   ";
	d = d % 1000;
	cout << d / 100 << "   ";
	d = d % 100;
	cout << d / 10 << "   ";
	d = d % 10;
	cout << d << "\n\n";

	system("pause");
	return 0;
}
