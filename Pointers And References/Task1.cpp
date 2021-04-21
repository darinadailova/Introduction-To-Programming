#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	//solution with reference
	cout << &a << " " << &b << endl;

	// solution with pointers
	int* ptrA = &a;
	int* ptrB = &b;
	cout << ptrA << " " << ptrB << endl;
	
	return 0;
}