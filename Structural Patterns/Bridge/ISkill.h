#ifndef ISKILL_H
#define ISKILL_H
/* Implementor */
class ISkill
{
public:
	virtual const char* apply() const = 0;
};
#endif // !ISKILL_H