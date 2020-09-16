#ifndef REVOLVER_H
#define REVOLVER_H
#include "IWeapon.h"
#include "ISkill.h"
class Revolver:public IWeapon
{
private:
	ISkill* skill;
public:
	Revolver(ISkill* skill);
	// Inherited via IWeapon
	virtual void attack() const override;
};
#endif // !REVOLVER_H