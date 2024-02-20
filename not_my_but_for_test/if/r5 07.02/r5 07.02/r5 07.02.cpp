#include <iostream>
using namespace std;
// проверка числа на четность.

int main()
{
    setlocale(LC_ALL, "rus");
    int a;
    cout << "a = ";
    cin >> a;
    if (a % 2 == 0) {
        cout << "число четное";
    }
    else {
        cout << "число нечетное";
    }
}
