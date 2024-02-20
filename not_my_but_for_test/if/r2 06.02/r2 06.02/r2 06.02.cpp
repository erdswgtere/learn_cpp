#include <iostream>
using namespace std;
#include <cmath>

// Для вещественного x найти значиние функции, принимающей значение 2sin(x), если х > 0, 6 - х, если x <= 0.
int main()
{
    double x;
    cout << "x = ";
    cin >> x;
    double f;
    if (x > 0) {
        f = 2 * sin(x);
    }
    if (x <= 0) {
        f = 6 - x;
    }
    cout << "f = " << f;
}

