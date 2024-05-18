#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int size = 12;
    int arr[size] = {};
    int sal, min, max, dia1, dia2;

    for (int i = 0; i < size; i++) {
        cin >> sal;
        arr[i] = sal;
    }

    cout << "������ ������� � ����� �� 0 �� 11: ";
    cin >> dia1 >> dia2;

    if (dia1 < 0 || dia1 >= size || dia2 < 0 || dia2 >= size || dia1 > dia2) {
        cout << "������������ �������" << endl;
        return 1;
    }

    min = arr[dia1];
    max = arr[dia1];

    for (int i = dia1 + 1; i <= dia2; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "̳������� �������� � �������: " << min << endl;
    cout << "����������� �������� � �������: " << max << endl;

    return 0;
}