#ifndef ASSASIN_BUILDER_H
#define ASSASIN_BUILDER_H
#include "CharacterBuilder.h"
class AssasinBuilder:public CharacterBuilder
{
public:
	AssasinBuilder();
	// Inherited via CharacterBuilder
	virtual void buildWeapon() override;
	virtual void buildStrength() override;
	virtual void buildHealth() override;
	virtual void buildDexterity() override;
	virtual void buildIntelligence() override;
};
#endif // !ASSASIN_BUILDER_H



