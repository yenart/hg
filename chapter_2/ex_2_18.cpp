#include "stdafx.h"
#include <iostream>
using namespace std;
 
int main()
{
    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << a << " is larger\n";
    }
 
    else if (a == b) {
        cout << "These numbers are equal.\n";
    }
    else {
        cout << b << " is larger\n";
    }
    system("pause");
    return 0;
}i
