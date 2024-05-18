#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int size = 12;
    int arr[size] = {};
    int sal, min, max;

    for (int i = 0; i < size; i++) {
        cin >> sal;
        arr[i] = sal;
    }

    min = arr[0];
    max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Мінімальне значення: " << min << endl;
    cout << "Максимальне значення: " << max << endl;

    return 0;
}