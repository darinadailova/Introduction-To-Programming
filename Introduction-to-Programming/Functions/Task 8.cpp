#include<iostream>
using namespace std;

int calculate(const int, const int, char);

int main() {

	int a;
	int b;
	char action;
	cout << "Please enter 2 numbers" << endl;
	cin >> a >> b;
	cout << "Please enter action" << endl;
	cin >> action;
	cout <<"Result: "<< calculate(a, b, action) << endl;

	return 0;
}

int calculate(const int a, const int b, char action) {
	if (action == '+') {
		return a + b;
	}
	if (action == '-') {
		return a - b;
	}
	if (action == '*') {
		return a * b;
	}
	if (action == '/') {
		return a / b;
	}
	if (action == '%') {
		return a % b;
	}
	return a + b;
}