#include<iostream>
using namespace std;

int main()
{

	int arr[49];
	for (int i = 0; i < 49; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < 49; i++) {
		if (arr[i] > arr[i + 1]) {
			cout << "The array is monotonic!" << endl;
			break;
		}
		if (arr[i] < arr[i + 1]) {
			cout << "The array isn't monotonic!" << endl;
			break;
		}
	}

	return 0;
}