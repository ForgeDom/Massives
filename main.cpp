#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    const int days = 31;

    double temperatures[days] = { 0.0 };

    for (int i = 0; i < days; ++i) {
        cout << "Введіть температуру за " << (i + 1) << " день січня: ";
        cin >> temperatures[i];
    }

    double sum_temperature = 0.0;
    for (int i = 0; i < days; ++i) {
        sum_temperature += temperatures[i];
    }
    double average_temperature = sum_temperature / days;
    cout << "Середня температура за місяць: " << average_temperature << endl;

    double mitka;
    int below_mitka = 0;
    cout << "Введіть мітку температури: ";
    cin >> mitka;
    for (int i = 0; i < days; ++i) {
        if (temperatures[i] < mitka) {
            below_mitka++;
        }
    }
    cout << "Температура опускалася нижче за мітку " << mitka << " " << below_mitka << " разів" << endl;

    return 0;
}