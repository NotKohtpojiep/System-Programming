#ifndef _IOFILE_DEFINE_CONST
#define _IOFILE_DEFINE_CONST
#include <iostream>

int readNumber() {
	int number;
	std::cout << "Type a number" << std::endl;
	std::cin >> number;
	return number;
}

void writeAnswer(int resultOfOperations) {
	if (resultOfOperations > 10) {
		resultOfOperations -= 10;
	}
	else {
		if (resultOfOperations != 10) {
			resultOfOperations += 10;
		}
	}
	std::cout << "Result is: " << resultOfOperations << std::endl;
}
#endif