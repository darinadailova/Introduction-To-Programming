#include<iostream>
#include<ctype.h>
using namespace std;



int main() {

	char str[100];
	cin >> str;
	for (int i = 0; i < strlen(str); i++) {
		str[i] = tolower(str[i]);
	}
	for (int i = 0; i < strlen(str); i++) {
		cout << str[i];
	}

	return 0;
}