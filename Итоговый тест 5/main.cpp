// itogo5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

int getRandomNumber(int min, int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	return rand() % ((max - min) + 1) + min;
}

void startGame(uint32_t attempts, int minRandThink, int maxRandThink)
{
	bool isCorrect = false;
	int suggestedNumber = getRandomNumber(minRandThink, maxRandThink);


	std::cout << "Let's play a game. I'm thinking of a number. You have " << attempts << " tries to guess what it is OR U RE GAY AHAHAHHAHHAH" << std::endl;;
	//std::cout << "Suggested value is " << suggestedNumber << std::endl;

	for (uint32_t i = 0; i < attempts;)
	{
		int typedNumber;
		std::string typedText;
		std::cout << "Guess #" << i + 1 << ":";
		std::cin >> typedText;

		try {
			typedNumber = std::stoi(typedText);
		}
		catch (std::exception e) {
			std::cout << "Incorrect typing, please type again" << std::endl;
			continue;
		}


		// Была просьба информировать пользователя, о том, что принято только первое число
		if (std::to_string(typedNumber).length() != typedText.length())
		{
			std::cout << "Warning: taked only a " << typedNumber << std::endl;
		}

		if (suggestedNumber == typedNumber)
		{
			isCorrect = true;
			break;
		}

		if (typedNumber < minRandThink || typedNumber > maxRandThink)
		{
			std::cout << "Incorrect value min value is " << minRandThink << " and max value is " << maxRandThink << std::endl;
			continue;
		}

		if (suggestedNumber < typedNumber)
		{
			std::cout << "Too high value" << std::endl;
		}
		else
		{
			std::cout << "Too low value" << std::endl;
		}
		i++;

		std::cin.clear();
		std::cin.ignore(32767, '\n');
	}
	if (isCorrect)
	{
		std::cout << "yay, you're not gay =)" << std::endl;
	}
	else
	{
		std::cout << "oh no... You are GAY =( Correct number was: " << suggestedNumber << std::endl;
	}
}

int main()
{
	int attempts = 7;
	int minThink = 1;
	int maxThink = 100;

	std::cout << "Hello World!\n";

	bool isFinishedGame = false;
	do
	{
		bool isFinishedTyping = false;
		while (isFinishedTyping != true)
		{
			std::string dfybi;
			std::cout << "Would you like to play again (y/n)?";
			std::cin >> dfybi;

			if (dfybi == "y")
			{
				break;
			}
			if (dfybi == "n")
			{
				isFinishedGame = true;
				break;
			}

			std::cout << "error, type again" << std::endl;
		}

		std::cin.clear();
		std::cin.ignore(32767, '\n');

		if (isFinishedGame != true)
			startGame(attempts, minThink, maxThink);

	} while (isFinishedGame != true);

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