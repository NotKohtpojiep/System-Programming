// cpp-test6.2.Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include "Header.h"

void printDeck(std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)>* deck)
{
	for (auto card : *deck)
	{
		std::string rankName = getCardRankName(card.rank);
		rankName.erase(std::remove_if(rankName.begin(), rankName.end(), ::islower), rankName.end());
		
		std::cout << rankName << getCardSuitName(card.suit)[0] << " ";
	}
}

int main()
{
	std::cout << "Hello World!\n";
	srand(time(nullptr));

	auto deck = getDeck();
	printDeck(&deck);
	std::cout << std::endl << std::endl;
	auto shuffledDeck = shuffleDeck(&deck);
	printDeck(&shuffledDeck);
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