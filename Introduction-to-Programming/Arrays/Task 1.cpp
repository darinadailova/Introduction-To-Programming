#include <iostream>
using namespace std;

int main() {

	int numberOfGrades;
	int arr[49];
	double averageGrade = 0;
	int sum = 0;
	cin >> numberOfGrades;

	for (int i = 0; i < numberOfGrades; ++i) {
		cin >> arr[i];
	}
	for (int i = 0; i < numberOfGrades; i++) {
		sum += arr[i];
	}
	averageGrade = (double)sum / numberOfGrades;

	cout << averageGrade << endl;

	return 0;
}