// itogo5.Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "Header.h"

int readCountOfPersons()
{
	int personsCount;
	bool isDone;
	do
	{
		isDone = true;
		std::cout << "Type count of persons" << std::endl;
		std::cin >> personsCount;
		if (std::cin.fail())
		{
			std::cout << "Incorrect value. Type again." << std::endl;
			isDone = false;
		}
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	} while (isDone != true);
	return personsCount;
}

Student readStudentData()
{
	Student student;
	bool isDone;
	do
	{
		isDone = true;
		std::cout << "Name of person: " << std::endl;
		std::cin >> student.Name;
		if (std::cin.fail())
		{
			std::cout << "Incorrect value. Type again." << std::endl;
			isDone = false;
		}
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	} while (isDone != true);

	do
	{
		isDone = true;
		std::cout << "Grade of person: " << std::endl;
		std::cin >> student.Grade;
		if (std::cin.fail())
		{
			std::cout << "Incorrect value. Type again." << std::endl;
			isDone = false;
		}
		if (student.Grade < 0 || student.Grade > 100)
		{
			std::cout << "Incorrect value, too low or high (0,100). Type again." << std::endl;
			isDone = false;
		}
		std::cin.clear();
		std::cin.ignore(32767, '\n');
	} while (isDone != true);
	return student;
}

int main()
{
	std::cout << "Hello World!\n";

	int personsCount = readCountOfPersons();

	Student* students = new Student[personsCount];
	for (int i = 0; i < personsCount; i++)
	{
		students[i] = readStudentData();
	}
	std::cout << "How students you have typed\n";
	for (int i = 0; i < personsCount; i++)
	{
		std::cout << getStudentData(&students[i]) << std::endl;
	}

	mergeSortStudents(students, personsCount);
	std::cout << "How students sorted\n";
	for (int i = 0; i < personsCount; i++)
	{
		std::cout << getStudentData(&students[i]) << std::endl;
	}
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
