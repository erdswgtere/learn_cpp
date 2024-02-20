#include <iostream>
using namespace std;
// вычислить значение функции. sin x, если х < 0, cos x, если х > 0.

int main()
{
    int x;
    cout << "x = ";
    cin >> x;
    if (x == 0) {
        cout << "x = 0";
    }
    else {
        if (x > 0) {
            double z = cos(x);
            cout << "f = " << z;
        }
        else {
            double z = sin(x);
            cout << "f = " << z;
        }
    }
}

