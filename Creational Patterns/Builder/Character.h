#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
class Character
{
private:
	std::string weapon = "";
	int strength = 0;
	int health = 0;
	int dexterity = 0;
	int intelligence = 0;
	
public:
	Character() = default;
	void setWeapon(const std::string& _weapon);
	const std::string& const getWeapon();
	void setStrength(const int _strength);
	const int& const getStrength();
	void setHealth(const int _health);
	const int& const getHealth();
	void setDexterity(const int _dexterity);
	const int& const getDexterity();
	void setIntelligence(const int _intelligence);
	const int& const getIntelligence();
	void print() const;

};

#endif // !CHARACTER_H


