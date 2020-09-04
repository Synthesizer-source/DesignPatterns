#include "AssasinBuilder.h"

AssasinBuilder::AssasinBuilder()
{
	this->character = new Character();
}

void AssasinBuilder::buildWeapon()
{
	this->character->setWeapon("Dagger");
}

void AssasinBuilder::buildStrength()
{
	this->character->setStrength(60);
}

void AssasinBuilder::buildHealth()
{
	this->character->setHealth(80);
}

void AssasinBuilder::buildDexterity()
{
	this->character->setDexterity(95);
}

void AssasinBuilder::buildIntelligence()
{
	this->character->setIntelligence(50);
}
