#ifndef CROSSBOW_H
#define CROSSBOW_H
#include "IWeapon.h"
#include "ISkill.h"
class Crossbow:public IWeapon
{
private:
	ISkill* skill;
public:
	Crossbow(ISkill* skill);
	// Inherited via IWeapon
	virtual void attack() const override;
};
#endif // !CROSSBOW_H