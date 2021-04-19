#include<iostream>
#include<cstring>

using namespace std;

int toLower(int value) {
	return (char)value + 32;
}

int main() {

	char str[50];
	cin >> str;
	int size = strlen(str);
	int value;
	for (int i = 0; i < size; i++) {
		value = int(str[i]);
		str[i] = toLower(value);
	}
	cout << str;

	return 0;
}