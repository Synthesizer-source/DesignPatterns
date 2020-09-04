#ifndef WARRIOR_BUILDER_H
#define WARRIOR_BUILDER_H
#include "CharacterBuilder.h"
class WarriorBuilder:public CharacterBuilder
{
public:
	WarriorBuilder();
	// Inherited via CharacterBuilder
	virtual void buildWeapon() override;
	virtual void buildStrength() override;
	virtual void buildHealth() override;
	virtual void buildDexterity() override;
	virtual void buildIntelligence() override;
	
};
#endif // !WARRIOR_BUILDER_H



