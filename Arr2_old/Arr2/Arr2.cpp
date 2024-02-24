using namespace std;
#include <Windows.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
const int n = 5;
class Random {
        public const int N = 4000;
        public const int A = 5;
        public static int Mn = 4096;
        public static int Y = 2451;
        public static double Rnd() {
            Y = (A * Y) % Mn;
            return (double)Y / Mn;
        }
    }
};
    static int Fill(int arr[][n], const int n) { // функция заполнения и вывода массива
        for (int i = 0; i < n; i++) {
            cout << "| "; // для красоты линии
            for (int j = 0; j < n; j++) {
                arr[i][j] = 30 + # % 31; // вместо решетки вызов функции
                cout << arr[i][j] << " ";
            }
            cout << " |" << endl; // для красоты линии
        }
        return 0;
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
    int main() { // основная программа
        setlocale(LC_ALL, "RU");
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);
        int mas[n][n] = {};
        Fill(mas, n);
        cout << endl;
        cout << "Максимальный элемент массива: " << Max(mas, n) << endl;
        cout << "Минимальный элемент массива: " << Min(mas, n);
    }