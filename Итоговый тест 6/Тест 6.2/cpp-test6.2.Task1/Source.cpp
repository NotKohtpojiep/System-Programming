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


std::string getCardRankName(CardRank rank)
{
	switch (rank)
	{
	case CardRank::Rank_2: return "2";
	case CardRank::Rank_3: return "3";
	case CardRank::Rank_4: return "4";
	case CardRank::Rank_5: return "5";
	case CardRank::Rank_6: return "6";
	case CardRank::Rank_7: return "7";
	case CardRank::Rank_8: return "8";
	case CardRank::Rank_9: return "9";
	case CardRank::Rank_10: return "10";
	case CardRank::Valet: return "Valet";
	case CardRank::Lady: return "Lady";
	case CardRank::King: return "King";
	case CardRank::Ase: return "Ase";
	default: return nullptr;
	}
}

std::string getCardSuitName(CardSuit suit)
{
	switch (suit)
	{
	case CardSuit::Hearts: return "Hearts";
	case CardSuit::Bubi: return "Bubi";
	case CardSuit::Peaks: return "Peaks";
	case CardSuit::Baptize: return "Baptize";
	default: return nullptr;
	}
}

int getRandomNumber(const int min, const int max)
{
	static const double fraction = 1.0 / (static_cast<double>(RAND_MAX) + 1.0);
	// Равномерно распределяем рандомное число в нашем диапазоне
	return min + rand() % (max - min + 1);
}

std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)> getDeck()
{
	std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)> decks = {};
	auto deckIndex = 0;
	for (auto i = 0; i < static_cast<int>(CardSuit::ENUM_END); ++i)
	{
		for (auto j = 0; j < static_cast<int>(CardRank::ENUM_END); ++j, ++deckIndex)
		{
			decks.at(deckIndex) = Card{ static_cast<CardSuit>(i), static_cast<CardRank>(j) };
		}
	}
	return decks;
}

void swapCards(Card* firstCard, Card* secondCard)
{
	Card tempCard = *firstCard;
	*firstCard = *secondCard;
	*secondCard = tempCard;
}

std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)>
shuffleDeck(std::array<Card, static_cast<int>(CardRank::ENUM_END)* static_cast<int>(CardSuit::ENUM_END)>* deck)
{
	auto shuffledDeck = *deck;
	for (auto i = 0; i < deck->size(); ++i)
	{
		int randArrayIndex{ getRandomNumber(0, deck->size() - 1) };
		swapCards(&shuffledDeck[i], &shuffledDeck[randArrayIndex]);
	}
	return shuffledDeck;
}
