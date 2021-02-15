#include<iostream>
using namespace std;

int askUser(const int from, const int to) {
	int number;
	cin >> number;
	while (number < from || number > to) {
		cin >> number;
	}
	return number;
}

int main() {

	int from;
	int to;
	cout << "Select interval" << endl;
	cin >> from >> to;
	cout << askUser(from, to) << endl;

	return 0;
}