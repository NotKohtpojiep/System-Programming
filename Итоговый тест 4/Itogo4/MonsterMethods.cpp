#include "MonsterHeader.h"
#include <string>

std::string GetMonsterInfo(Monster monster) {
	return "This " + GetMonsterTypeName(monster.type) +
		" is named " + monster.name + " has " + std::to_string(monster.hp) + " health " +
		" and has speed " + std::to_string(monster.speed) + " km/h";
}

std::string GetMonsterTypeName(MonsterType type) {
	switch (type)
	{
		case Ogr:
			return "Ogr";
		case Goblin:
			return "Goblin";
		case Orc:
			return "Orc";
		case Skelet:
			return "Skelet";
		case Troll:
			return "Troll";
	}
}