#include<iostream>

int sum(const int num1, const int num2) {
	return (num1 + num2);
}

int main() {
	int num1, num2;
	std::cin >> num1 >> num2;
	std::cout << sum(num1, num2) << '\n';

	return 0;
}
