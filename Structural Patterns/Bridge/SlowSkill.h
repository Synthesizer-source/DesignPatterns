#ifndef SLOWSKILL_H
#define SLOWSKILL_H
#include "ISkill.h"
/* Concrete Implementor */
class SlowSkill:public ISkill
{
public:
	// Inherited via ISkill
	virtual const char* apply() const override;
};
#endif // !SLOWSKILL_H