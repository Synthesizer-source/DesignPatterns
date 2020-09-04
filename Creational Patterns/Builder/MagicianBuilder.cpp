#include "MagicianBuilder.h"

MagicianBuilder::MagicianBuilder()
{
	this->character = new Character();
}

void MagicianBuilder::buildWeapon()
{
	this->character->setWeapon("Staff");
}

void MagicianBuilder::buildStrength()
{
	this->character->setStrength(40);
}

void MagicianBuilder::buildHealth()
{
	this->character->setHealth(60);
}

void MagicianBuilder::buildDexterity()
{
	this->character->setDexterity(85);
}

void MagicianBuilder::buildIntelligence()
{
	this->character->setIntelligence(95);
}
