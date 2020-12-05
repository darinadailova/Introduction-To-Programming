//Триъгълна матрица наричаме такава квадратна матрица, която има само нули под или над главния или вторичния си диагонал. Даден е двумерен масив с nxn елемента. Да се провери дали е триъгълна матрица.

//Ограничения: 2 <= n <= 100

#include<iostream>
#include<vector>
using namespace std;

int main() {
	int n, input;
	cin >> n;
	vector<std::vector<int>>matrix(n);
	if (n < 2 || n>100) {
		return 1;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> input;
			matrix[i].push_back(input);
		}
	}
	bool flag = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (matrix[i][j] == 0) {
				flag = true;
			}
			if(matrix[i][j] != 0) {
				flag = false;
			}
		}
	}
	if (flag) { 
		cout << "Yes1" << endl;
		return 1;
	}
	bool flag1 = false;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			if (matrix[i][j] == 0) {
				flag1 = true;
			}
			if (matrix[i][j] != 0) {
				flag1 = false;
			}
		}
	}
	if (flag1) {
		cout << "Yes2" << endl;
		return 1;
	}
	bool flag2 = false;
	for (int i = n; i > 0; i--) {
		for (int j = i + 1; j < n; j++) {
			if (matrix[i][j] == 0) {
				flag2 = true;
			}
			if (matrix[i][j] != 0) {
				flag2 = false;
			}
		}
	}
	if (flag2) {
		cout << "Yes3" << endl;
		return 1;
	}
	bool flag3 = false;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (matrix[i][j] == 0) {
				flag3 = true;
			}
			if (matrix[i][j] != 0) {
				flag3 = false;
			}
		}
	}
	if (flag3) {
		cout << "Yes4" << endl;
		return 1;
	}
	cout << "No" << endl;

	return 0;
}
