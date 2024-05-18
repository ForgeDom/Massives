#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const int max_size = 10000;
	int arr[max_size];
	int N, cur;
	cout << "Введіть кількість чисел:" << endl;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cout << "Введіть число:" << endl;
		cin >> cur;
		arr[i] = cur;
	}

	double sum_negative = 0;
	for (int i = 0; i < N; ++i) {
		if (arr[i] < 0) {
			sum_negative += arr[i];
		}
	}
	double dob_between = 1;
	int min = arr[0];
	int max = arr[0];

	for (int i = 1; i < N; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	for (int i = min + 1; i < max; i++) {
		dob_between *= arr[i];
	}
	
	int dob_par = 1;
	for (int i = 0; i < N; i += 2) {
		dob_between *= arr[i];
	}
	int sum_negativ_between = 0;
	int negativ1 = -1;
	int negativ2 = -1;
	for (int i = 0; i < N; ++i) {
		if (arr[i] < 0) {
			if (negativ1 == -1) {
				negativ1 = i;
			}
			negativ2 = i;
		}
	}
	if (negativ1 != -1 && negativ2 != -1) {
		for (int i = negativ1 + 1; i < negativ2; ++i) {
			sum_negativ_between += arr[i];
		}
	}
	cout << "Сума від'ємних чисел: " << sum_negative << endl;
	cout << "Добуток елементів між min і max: " << dob_between << endl;
	cout << "Добуток елементів з парними номерами: " << dob_par << endl;
	cout << "Сума елементів між першим і останнім від'ємними елементами: " << sum_negativ_between << endl;

	return 0;
}