#include<iostream>

int min(int a, int b) {
	return ((a < b) ? (a) : (b));
}


int main() {
	int a, b;
	std::cin >> a >> b;
	std::cout << min(a, b);

	return 0;
}
