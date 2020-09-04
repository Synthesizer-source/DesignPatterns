#include "Character.h"
#include <iostream>
void Character::setWeapon(const std::string& _weapon)
{
	this->weapon = _weapon;
}

const std::string& const Character::getWeapon()
{
	return this->weapon;
}

void Character::setStrength(const int _strength)
{
	this->strength = _strength;
}

const int& const Character::getStrength()
{
	return this->strength;
}

void Character::setHealth(const int _health)
{
	this->health = _health;
}

const int& const Character::getHealth()
{
	return this->health;
}

void Character::setDexterity(const int _dexterity)
{
	this->dexterity = _dexterity;
}

const int& const Character::getDexterity()
{
	return this->dexterity;
}

void Character::setIntelligence(const int _intelligence)
{
	this->intelligence = _intelligence;
}

const int& const Character::getIntelligence()
{
	return this->intelligence;
}

void Character::print() const
{	
	std::cout << "Weapon : " << this->weapon << "\n"
		<< "Strength : " << this->strength << "\n"
		<< "Health : " << this->health << "\n"
		<< "Dexterity : " << this->dexterity << "\n"
		<< "Intelligence : " << this->intelligence << "\n";
	std::cout << "---------------------------\n";
}

