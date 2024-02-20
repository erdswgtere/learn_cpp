#include <iostream>
using namespace std;
// вывести сумму если 1 число меньше второго, вывести рназность если 1 число больше второго.

int main()
{
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x > y) {
        int z = x - y;
        cout << z;
    }
    else {
        int z = x + y;
        cout << z;
    }
}

