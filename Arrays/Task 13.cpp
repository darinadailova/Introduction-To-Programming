#include<iostream>
using namespace std;

int main() {

	double arr[50];
	for (int i = 0; i < 50; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 50; i++) {
		for (int j = i + 1; j < 50; j++) {
			double temp;
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
	for (int i = 0; i < 50; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}