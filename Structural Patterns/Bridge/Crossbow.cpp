#include "Crossbow.h"

Crossbow::Crossbow(ISkill* skill)
{
	this->skill = skill;
}

void Crossbow::attack() const
{
	printf("Crossbow attack with %s.\n", this->skill->apply());
}
