#include <iostream>
using namespace std;
// проверка на кратность 7 и на остаток 5 от деления на 10.

int main()
{
	int a;
	cout << "a = ";
	cin >> a;
	if (a % 7 == 0 && a % 10 == 5) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}

