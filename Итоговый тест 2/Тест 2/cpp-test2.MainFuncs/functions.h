#pragma once
#include <iostream>
int readIntFromConsole(std::string message) {
	int number;
	std::cout << message;
	std::cin >> number;
	return number;
}

double readDoubleFromConsole(std::string message) {
	double number;
	std::cout << message;
	std::cin >> number;
	return number;
}