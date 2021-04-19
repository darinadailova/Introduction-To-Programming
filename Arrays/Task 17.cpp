#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<double>vec;
	int N;
	cin >> N;
	double input;
	for (int i = 0; i < N; i++) {
		cin >> input;
		vec.push_back(input);
	}
	
	bool flag = false;
	for (int i = 0; i < vec.size() / 2; i++) {
		if (vec[i] == vec[vec.size() - i - 1]) {
			flag = true;
		}
		else {
			flag = false;
		}
	}
	if (flag) {
		cout << "yes" << endl;
	}
	else {
		cout << "no" << endl;
	}

	return 0;
}