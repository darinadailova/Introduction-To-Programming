#include<iostream>
#include<cstring>
using namespace std;

int countSpecialSymbols(char str[]) {
	int size = strlen(str);
	int count = 0;
	for (int i = 0; i < size; i++) {
		if (str[i] == '?' || str[i] == '!' || str[i] == ',') {
			count++;
		}
	}
	return count;
}

int main() {

	char str[50];
	cin >> str;
	cout << countSpecialSymbols(str) << endl;

	return 0;
}