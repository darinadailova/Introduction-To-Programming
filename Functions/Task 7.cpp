#include<iostream>
using namespace std;

int pow(const int num, const unsigned int N) {
	int result = 1;
	for (int i = 0; i < N; i++) {
		result *= num;
	}
	return result;
}

int main() {

	int number;
	unsigned int power;
	cin >> number >> power;
	cout << pow(number, power) << endl;

	return 0;
}