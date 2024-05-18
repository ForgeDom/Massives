#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int size = 5;
	int arr[size] = {};
	int elem, sum = 0;
	for (int i = 0; i < size; i++) {
		cin >> elem;
		arr[i] = elem;
	}
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	cout << sum;
	return 0;
}