#include <iostream>
#include "math.h"
#include <iomanip>
using namespace std;
int main()
{
    float y, x;
    cout << "Input x: ";
    cin >> x;
    y = 0;
    for (int n = 1; n < 6; n++)
    {
        y += cos(n);
    }
    y = (tan(x * x) + y) / x + 5;
    cout << "Output y = " << setprecision(2) << y << endl;
}
//Just new comment ;)