#ifndef XBOX_H
#define XBOX_H
#include "IConsole.h"
/* Concrete product */
class Xbox:public IConsole
{
public:
	// Inherited via IConsol
	virtual void info() override;
};
#endif // !XBOX_H