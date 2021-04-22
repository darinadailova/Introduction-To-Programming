#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char str[]) {
	int size = strlen(str);
	for (int i = 0; i < size / 2; i++) {
		if (str[i] != str[size- i - 1]) {
			return false;
		}
	}
	return true;
}


int main() {
	char str[50];
	cin >> str;
	if (isPalindrome(str)) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}