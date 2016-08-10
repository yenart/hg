#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d, e;
 
    cout << "enter five integers!" << endl;
    cin >> a >> b >> c >> d >> e;
    cout << endl;
 
    int min = a;
    int max = a;
 
    if (b <= a)
        min = b;
    if (c <= b)
        min = c;
    if (d <= c)
        min = d;
    if (e <= d)
        min = e;
 
    if (b >= a)
        max = b;
    if (c >= b)
        max = c;
    if (d >= c)
        max = d;
    if (e >= d)
        max = e;
 
    cout << "min = " << min << "\n"
        << "max = " << max << endl;
 
    system("pause");
    return 0;
}
