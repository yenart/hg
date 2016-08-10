#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main()
{
    int r;
 
    cout << "Enter the circle radius: ";
    cin >> r;
    cout << "Diameter is " << r * 2 << "\n";
    cout << "Circumference is " << 2 * 3.14159 * r << "\n";
    cout << "Area is " << 3.14159 * r * r << endl;
 
    system("pause");
    return 0;
}
