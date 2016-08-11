#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main()
{
    int a, b, c;
    cout << "Input three different integers : ";
    cin >> a >> b >> c;
    cout << "Sum is " << a + b + c << "\n";
    cout << "Average is " << (a + b + c) / 3 << "\n";
    cout << "Product is " << a * b * c << "\n";
 
    if (a < b) {
        if (c < a) {
            cout << "Smallest is " << c << "\n";
        }
        else {
            cout << "Smallest is " << a << "\n";
        }
    }
    else {
        cout << "Smallest is " << b << "\n";
    }
 
    if (a > b) {
        if (c > a) {
            cout << "Largest is " << c << "\n";
        }
        else {
            cout << "Largest is " << a << "\n";
        }
    }
    else {
        cout << "Largest is " << b << "\n";
    }
    system("pause");
    return 0;
}
