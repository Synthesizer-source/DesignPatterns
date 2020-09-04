#ifndef MAGICIAN_BUILDER_H
#define MAGICIAN_BUILDER_H
#include "CharacterBuilder.h"
class MagicianBuilder:public CharacterBuilder
{
public:
	MagicianBuilder();
	// Inherited via CharacterBuilder
	virtual void buildWeapon() override;
	virtual void buildStrength() override;
	virtual void buildHealth() override;
	virtual void buildDexterity() override;
	virtual void buildIntelligence() override;
};
#endif // !MAGICIAN_BUILDER_H



