#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int days = 31;

    double temperatures[days] = { 0.0 };

    for (int i = 0; i < days; ++i) {
        cout << "������ ����������� �� " << (i + 1) << " ���� ����: ";
        cin >> temperatures[i];
    }

    double sum_temperature = 0.0;
    for (int i = 0; i < days; ++i) {
        sum_temperature += temperatures[i];
    }
    double average_temperature = sum_temperature / days;
    cout << "������� ����������� �� �����: " << average_temperature << endl;

    double mitka;
    int below_mitka = 0;
    cout << "������ ���� �����������: ";
    cin >> mitka;
    for (int i = 0; i < days; ++i) {
        if (temperatures[i] < mitka) {
            below_mitka++;
        }
    }
    cout << "����������� ���������� ����� �� ���� " << mitka << " " << below_mitka << " ����" << endl;

    return 0;
}