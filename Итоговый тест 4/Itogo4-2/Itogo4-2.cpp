// Itogo4-2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum LiftLevel : int {
	Parking = -1,
	Bank = 1,
	SaveCompany = 2,
	FondBirge = 3,
	MuseumZaul = 4,
	Restoroune = 5
};

enum ProcessState : bool
{
	ChoiceToDo = true,
	ChoiceLevel = false
};

struct PersonState
{
	LiftLevel level;
	ProcessState state;
};

std::string getLevelInfo(LiftLevel level)
{
	switch (level)
	{
		case Parking:
			return "You are in the parking";
		case Bank:
			return "There is Credit Agrigole Bank";
		case SaveCompany:
			return "Save company UNICA";
		case FondBirge:
			return "Found birge";
		case MuseumZaul:
			return "Hall for museum and hall for presentation";
		case Restoroune:
			return "Restouran Sky";
		default:
			return "Error";
	}
}

PersonState changeLevel(int level, PersonState personState)
{
	std::string levelInfo = getLevelInfo(LiftLevel(level));
	std::cout << levelInfo << std::endl;
	if (levelInfo != "Error")
	{
		personState.level = LiftLevel(level);
		personState.state = ChoiceToDo;
	}
	return personState;
}

std::string getStateInfo(ProcessState state)
{
	if (state == false)
	{
		return "Choice lift level (-1, 1, 2, 3, 4, 5) : ";
	}
	else
	{
		return "Leave from lift - print 0.\nChange other level - print 1 : ";
	}
}

void startGameWtf(PersonState personState)
{
	bool isFinished = false;
	while (isFinished != true)
	{
		int choicedOption;
		std::cout << getStateInfo(personState.state);
		std::cin >> choicedOption;
		std::cout << std::endl;

		if (personState.state == ChoiceLevel)
		{
			personState = changeLevel(choicedOption, personState);
		}
		else
		{
			if (choicedOption == 0)
			{
				isFinished = true;
			}
			else
			{
				if (choicedOption != 1)
				{
					continue;
				}
			}
			personState.state = ChoiceLevel;
		}
	}
}

int main()
{
	std::cout << "Hello World!\n";
	PersonState personState
	{
		LiftLevel(0),
		ChoiceLevel
	};
	startGameWtf(personState);
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
