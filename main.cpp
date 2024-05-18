#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    srand(time(0));
    int salary;
    const int max_size = 6;
    int arr[max_size] = { 0 };
    int sum = 0;

    for (int i = 0; i < max_size; i++) {
        cin >> salary;
        arr[i] = salary;
    }

    for (int i = 0; i < max_size; i++) {
        sum += arr[i];
    }
    cout << sum;
    return 0;
}
