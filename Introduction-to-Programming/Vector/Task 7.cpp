#include<iostream>
#include<vector>

using namespace std;

int main() {

	int n, input;
	cin >> n;
	vector<int>data;
	vector<int>vec;
	for (int i = 0; i < n; i++) {
		cin >> input;
		data.push_back(input);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (data[i] == data[j]) {
				int num = data[i];
				vec.push_back(num);
			}
		}
	}
	for (int i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}

	return 0;
}