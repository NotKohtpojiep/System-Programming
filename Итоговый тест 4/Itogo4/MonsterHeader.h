#pragma once
#include <iostream>

enum MonsterType
{
    Ogr,
    Goblin,
    Orc,
    Skelet,
    Troll
};

struct Monster
{
    MonsterType type;
    std::string name;
    int hp;
    uint16_t speed;
};

std::string GetMonsterInfo(Monster monster);
std::string GetMonsterTypeName(MonsterType type);