using namespace std;
#include <Windows.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
const int n = 5;

class Random {
private:
	const int N = 4000;
	const int A = 5;
	int Mn = 4096;
	int Y = 2451;
	double Rnd() {
		Y = (A * Y) % Mn;
		return (double)Y / Mn;
	}
public:
	void Fill(int arr[][n], const int n) { // функция заполнения и вывода массива (поменяв тип данных массива можно получить дробную часть)
		for (int i = 0; i < n; i++) {
			cout << "| "; // для красоты линии
			for (int j = 0; j < n; j++) {
				arr[i][j] = Rnd() * 10; // заменяя 10 регулируется разряд числа
				cout << arr[i][j] << " ";
			}
			cout << " |" << endl; // для красоты линии
		}
	}
	static int Min(int arr[][n], const int n) { // функция нахождения минимального элемента в массиве
		int min = arr[0][0];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] < min) {
					min = arr[i][j];
				}
			}
		}
		return min;
	}
	static int Max(int arr[][n], const int n) { // функция нахождения максимального элемента в массиве
		int max = arr[0][0];
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] > max) {
					max = arr[i][j];
				}
			}
		}
		return max;
	}
};
int main() { // основная программа
	setlocale(LC_ALL, "RU");
	Random rnd1;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int mas[n][n] = {};
	rnd1.Fill(mas, n);
	cout << "Максимальный элемент массива: " << rnd1.Max(mas, n) << endl;
	cout << "Минимальный элемент массива: " << rnd1.Min(mas, n);
	cout << endl;
}