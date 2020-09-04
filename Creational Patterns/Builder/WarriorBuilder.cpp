#include "WarriorBuilder.h"

WarriorBuilder::WarriorBuilder()
{
	this->character = new Character();
}

void WarriorBuilder::buildWeapon()
{
	this->character->setWeapon("Axe");
}

void WarriorBuilder::buildStrength()
{
	this->character->setStrength(90);
}

void WarriorBuilder::buildHealth()
{
	this->character->setHealth(90);
}

void WarriorBuilder::buildDexterity()
{
	this->character->setDexterity(40);
}

void WarriorBuilder::buildIntelligence()
{
	this->character->setIntelligence(20);
}
