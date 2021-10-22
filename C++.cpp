#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int min, max;
    float h, y, x;
    cout << "Enter [min, max] and h: " << endl;
    cin >> min >> max >> h;
    cout << "while: " << endl;
    x = min;
    cout << "\tx\ty(x)" << endl;
    while (x <= max + h / 2)
    {
        y = (x * x * x * x * x) + 2 * (x * x) - 3;
        cout << setw(10) << x << setw(10) << y << endl;
        x += h;
    }
    cout << "do:while: " << endl;
    x = min;
    cout << "\tx\ty(x)" << endl;
    do
    {
        y = (x * x * x * x * x) + 2 * (x * x) - 3;
        cout << setw(10) << x << setw(10) << y << endl;
        x += h;
    } while (x <= max + h / 2);
}
