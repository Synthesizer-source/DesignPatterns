#include "Revolver.h"

Revolver::Revolver(ISkill* skill)
{
	this->skill = skill;
}

void Revolver::attack() const
{
	printf("Revolver attack with %s.\n",this->skill->apply());
}
