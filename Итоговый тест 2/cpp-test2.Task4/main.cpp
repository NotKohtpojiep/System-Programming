// cpp-test2.Task4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "functions.h"
#include "../cpp-test2.MainFuncs/functions.h"


int main()
{
	int verstes = readIntFromConsole("Input distantion from versts: ");
	int kilometres = getKilometresFromVerst(verstes);
	std::cout << verstes << " verstes = " << kilometres << " km" << std::endl;
}
