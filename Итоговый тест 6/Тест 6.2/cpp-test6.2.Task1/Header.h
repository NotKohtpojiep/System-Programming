#pragma once
#include <array>
#include <string>

enum class CardRank
{
	Rank_2,
	Rank_3,
	Rank_4,
	Rank_5,
	Rank_6,
	Rank_7,
	Rank_8,
	Rank_9,
	Rank_10,
	Valet,
	Lady,
	King,
	Ase,
	ENUM_END
};

enum class CardSuit
{
	Hearts,
	Bubi,
	Peaks,
	Baptize,
	ENUM_END
};

struct Card
{
	CardSuit suit;
	CardRank rank;
};


std::string getCardRankName(const CardRank rank);

std::string getCardSuitName(const CardSuit suit);

int getRandomNumber(const int min, const int max);

std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)> getDeck();

void swapCards(Card* firstCard, Card* secondCard);

std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)>
shuffleDeck(const std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)>* deck);