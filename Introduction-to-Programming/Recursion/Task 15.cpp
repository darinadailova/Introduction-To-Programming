#include <iostream>
using namespace std;

int stringLenght(char a[]) {
	int count = 0;
	for (int i = 0; a[i] != '\0'; i++) {
		count++;
	}
	return count;
}

bool isDifferent(char arr[], int& size) {
	if (size <= 1) {
		return true;
	}
	for (int i = size - 2; i >= 0; --i) {
		if (arr[i] == arr[size - 1]) {
			return false;
		}
	}
	--size;
	return isDifferent(arr, size);
}


int main()
{
	char arr[50];
	cin >> arr;
	int size = stringLenght(arr);
	cout << isDifferent(arr, size) << endl;

	return 0;
}