#ifndef FIRESKILL_H
#define FIRESKILL_H
#include "ISkill.h"
/* Concrete Implementor */
class FireSkill:public ISkill
{
public:
	// Inherited via ISkill
	virtual const char* apply() const override;
};
#endif // !FIRESKILL_H