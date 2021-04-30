// cpp-test.Constants.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "../cpp-test2.Task1/fuctions.h"
#include "../cpp-test2.Task2/functions.h"
#include "../cpp-test2.Task3/functions.h"
#include "../cpp-test2.Task4/functions.h"
#include "LibConstants.h"


int main()
{
	// Константовые игры эдишн
    std::cout << "Hello World!\n";
	// Задание 1
	const double result1 = 
		getSpeed(LibConstantsTask5::METRES, LibConstantsTask5::MINUTES);
	std::cout << "Your speed is " << result1 << " km/h" << std::endl;

	// Задание 2
	const double result2 = 
		getTravelCost(LibConstantsTask6::KILOMETRES, 
			LibConstantsTask6::BENSIN_RASHOD_LITRES, 
			LibConstantsTask6::BENSIN_PRICE);
	std::cout << "Traveling to village and back will cost " << result2 << " rub." << std::endl;

	// Задание 3
	const int discount = getDiscont(LibConstantsTask7::PRICE);
	if (discount > 0)
	{
		std::cout << "You have a discont at " << discount << "%" << std::endl;
		std::cout << "Your discont price is "
			<< getDiscondPrice(LibConstantsTask7::PRICE, discount)
			<< " rub" << std::endl;
	}
	else
	{
		std::cout << "You have not a discont" << std::endl;
	}

	// Задание 4
	const int kilometres = getKilometresFromVerst(LibConstantsTask8::VERSTES);
	std::cout << LibConstantsTask8::VERSTES << " verstes = " << kilometres << " km" << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
