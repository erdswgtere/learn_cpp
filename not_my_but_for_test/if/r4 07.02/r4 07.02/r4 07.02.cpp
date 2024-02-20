#include <iostream>
using namespace std;
// даны 3 переменные, если они все больше нуля, то посчитать их сумму.

int main()
{
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    if ((a > 0) && (b > 0) && (c > 0)) {
        int z = a + b + c;
        cout << "sum = " << z;
    }
}
