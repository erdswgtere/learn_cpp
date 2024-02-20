#include <iostream>
using namespace std;
// даны два числа вывести максимальное из них.
int main()
{
    int x, y;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    if (x > y) {
        cout << x;
    }
    else {
        cout << y;
    }
}
