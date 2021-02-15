#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n;
	cin >> n;
	string input;
	vector<string>vec;
	for (int i = 0; i < n; i++) {
		cin >> input;
		vec.push_back(input);
	}
	char letter;
	cin >> letter;
	for (int i = 0; i < n; i++) {
		if (vec[i][0] == letter) {
			cout << i << endl;
		}
	}

	return 0;
}