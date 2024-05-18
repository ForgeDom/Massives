#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int arr_size = 5;
	int arr[arr_size] = { 1,2,3,4,5 };
	for (int i = arr_size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	return 0;
}