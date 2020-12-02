//Задача Да се състави функция sum(const int a, const int b), която приема две числа и връща като резултат сбора им.Пример
//int num1 = 5, num2 = 6;
//std::cout << sum(num1, num2); //изход 11

#include<iostream>

void sum(const int num1, const int num2) {
	std::cout << num1 + num2 << '\n';
}

int main() {
	int num1, num2;
	std::cin >> num1 >> num2;
	sum(num1, num2);

	return 0;
}