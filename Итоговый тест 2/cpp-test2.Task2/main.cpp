#include <iostream>
#include "functions.h"
#include "../cpp-test2.MainFuncs/functions.h"

int main()
{
    int kilometers = readIntFromConsole("Input kilometers to village (km) : ");
	double bensinRashod = readDoubleFromConsole("Input rashod bensina (litres per 100 km probega) : ");
	double bensinPrice = readDoubleFromConsole("Input bensine price (rub) : ");
	double result = getTravelCost(kilometers, bensinRashod, bensinPrice);
	std::cout << "Traveling to village and back will cost " << result << " rub." << std::endl; 
}