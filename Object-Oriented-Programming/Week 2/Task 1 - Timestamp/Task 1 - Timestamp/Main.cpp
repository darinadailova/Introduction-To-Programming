#include "Timestamp.hpp"
#include <iostream>

int main() {
	Timestamp timestamp;
	timestamp.createTimestamp(3665);
	Timestamp brand2;
	brand2.createTimestamp(3675);
	timestamp.addAnotherBrand(brand2);
	timestamp.print();

	return 0;
}