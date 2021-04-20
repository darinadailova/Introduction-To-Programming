#include<iostream>
using namespace std;

void sortArray(int arr[], int N) {
	int temp;
	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main() {

	int arr[50];
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sortArray(arr, N);

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	
	return 0;
}