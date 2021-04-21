#include <iostream>

#include "../cpp-test2.MainFuncs/functions.h"
#include "fuctions.h"

int main()
{
	int metres = readIntFromConsole("Input reached dinstantions (metres) : ");
	double minutes = readIntFromConsole("Input time (minutes.seconds) : ");
	double result = getSpeed(metres, minutes);
	std::cout << "Your speed is " << result << " km/h" << std::endl; 
}