#include<iostream>
#include<cstring>

using namespace std;

int main() {
	char str[50];
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		for (int j = i + 1; j < strlen(str); j++) {
			if (str[i] == str[j]) {
				cout << "No" << endl;
				return 1;
			}
		}
	}
	cout << "Yes" << endl;

	return 0;
}