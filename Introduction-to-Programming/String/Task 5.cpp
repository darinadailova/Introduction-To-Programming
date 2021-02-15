#include<iostream>
#include<cctype>
#include<cstring>

using namespace std;

int main() {

	char S1[150];
	char S2[150];
	cin >> S1 >> S2;
	for (int i = 0; i < strlen(S1); i++) {
		bool flag = true;
		if (islower(S1[i])) {
			for (int j = 0; j < strlen(S2); j++) {
				if (S1[i] == S2[j]) {
					flag = false;
				}
			}
		}
	if (flag) {
		cout << S1[i];
	}
	}


	return 0;
}