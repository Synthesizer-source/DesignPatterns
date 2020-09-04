#ifndef CHARACTER_BUILDER_H
#define CHARACTER_BUILDER_H
#include "Character.h"
/*
	Builder abstract base class
	--> Builder design pattern, provide construct step by step complex objects.
*/
class CharacterBuilder
{
protected:
	Character* character;
public:
	virtual void buildWeapon() = 0;
	virtual void buildStrength() = 0;
	virtual  void buildHealth() = 0;
	virtual void buildDexterity() = 0;
	virtual void buildIntelligence() = 0;
	virtual Character* getCharacter() const;
	virtual ~CharacterBuilder() { }

};

#endif // !CHARACTER_BUILDER_H

