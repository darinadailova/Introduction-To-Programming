#include<iostream>
using namespace std;

int main()
{

	int arr[49];

	for (int i = 0; i < 49; ++i) {
		cin >> arr[i];
	}
	
	bool flag = true;
	for (int i = 0; i < 48; i++) {
		if (arr[i] < arr[i + 1]) {
			cout << "The array isn't monotonic!" << endl;
			flag  = false;
			break;
		}
	}

	if(flag) {
		cout << "The array is monotonic!" << endl;
	}

	return 0;
}