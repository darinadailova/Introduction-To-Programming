#include<iostream>

int abs(int num) {
	return ((num > 0) ? (num) : (-num));
}


int main() {
	int num;
	std::cin >> num;
	std::cout << abs(num);

	return 0;
}
