#include "CharacterCreator.h"

CharacterCreator::CharacterCreator(CharacterBuilder* _builder)
{
	this->builder = _builder;
}

void CharacterCreator::setCharacterBuilder(CharacterBuilder* _builder)
{
	this->builder = _builder;
}

/* Building operations. */
void CharacterCreator::createCharacter()
{
	builder->buildWeapon();
	builder->buildStrength();
	builder->buildHealth();
	builder->buildDexterity();
	builder->buildIntelligence();
	
}

Character* CharacterCreator::getCreatedCharacter() const
{
	return builder->getCharacter();
}
