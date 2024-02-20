#include <iostream>
using namespace std;
// даны 2 числа. посчитать кол-во чисел кратных 9 и оканчивающихся на 5.

int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	int n = 0;
	if ((a % 9 == 0) && (a % 10 == 5)) {
		n++;
	}
	if (b % 9 == 0 && b % 10 == 5) {
		n++;
	}
	cout << n;
}
