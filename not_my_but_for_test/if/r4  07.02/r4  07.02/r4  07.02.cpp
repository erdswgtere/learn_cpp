#include <iostream>
using namespace std;
//  даны 3 числа. посчитать количество нулей.

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    int n = 0;

    if (a == 0) {
        n++;
    }
    if (b == 0) {
        n++;
    }
    if (c == 0) {
        n++;
    }
    cout << "zero = " << n;
}

