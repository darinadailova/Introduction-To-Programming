#include<iostream>
using namespace std;

int main() {
	int arr[50];
	int x;
	cin >> x;
	for (int i = 0; i < 50; ++i) {
		cin >> arr[i];
	}
	
	for (int i = 0; i < 50; i++) {
		if (arr[i] == x) {
			cout << "yes" << endl;
			return 1;
		}
	}

	return 0;
}
