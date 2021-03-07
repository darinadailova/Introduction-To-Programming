#include<iostream>
using namespace std;

int main() {

	int arrA[49];
	int arrB[49];
	int sum = 0;

	for (int i = 0; i < 49; ++i) {
		cin >> arrA[i];
	}

	for (int i = 0; i < 49; ++i) {
		cin >> arrB[i];
	}
	
	for (int i = 0; i < 49; i++) {
		sum += arrA[i] * arrB[i];
	}

	cout << sum << endl;
	
	return 0;
}