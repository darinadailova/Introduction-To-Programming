#include<iostream>
using namespace std;

double power(double x, int n) {
	if (n < 0) {
		return x * 1 / pow(x, n + 1);
	}
	if (n == 0) {
		return 1;
	}
	if (n == 1) {
		return x;
	}
	if (n > 0) {
		return x *= power(x, n - 1);
	}
}

int main() {
	double x;
	int n;
	cin >> x >> n;
	cout << power(x, n) << endl;

	return 0;
}