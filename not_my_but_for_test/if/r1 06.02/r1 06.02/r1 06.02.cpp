#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    int x, y, z;
    cout << "введите три числа" << endl;
    cin >> x;
    cin >> y;
    cin >> z;
    int max = x;
    int min = x;
    if (y > x) {

        if (z > y) {
            max = z;
        }
        else
        {
            max = y;
        }
    }
    if (y < x) {
        min = y;
    }
    if (z < x && z < y) {
        min = z;
    }
    cout << "min = " << min << "\t" << "max = " << max;
}
