#include<iostream>
using namespace std;

double average(const int N) {
	double average = 0;
	double number;
	for (int i = 0; i < N; i++) {
		cin >> number;
		average += number;
	}
	return average / number;
}

int main() {

	int N;
	cin >> N;
	cout << average(N) << endl;

	return 0;
}
