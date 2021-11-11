#include <iostream>
#include "math.h"
#include <iomanip>
//new commentary

using namespace std;
int main()
{
    float y, c;
    cout << "Input x: " << endl;
    cin >> c;
    y = 0;
    for (int n = 1; n < 6; n++)
    {
        y += sin(n);
    }
    y = (tan(c * c) + y) / c + 5;
    cout << "Output Y = " << setprecision(2) << y << endl;
    // one more commentar
}