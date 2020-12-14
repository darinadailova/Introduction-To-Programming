#include <iostream>
using namespace std;

int Fibonacci(int num) {
	if (num <= 1) {
		return num;
	}
	return (Fibonacci(num - 1) + Fibonacci(num - 2));
}


int main()
{
	int num;
	cin >> num;
	cout << Fibonacci(num) << endl;
	
	return 0;
}