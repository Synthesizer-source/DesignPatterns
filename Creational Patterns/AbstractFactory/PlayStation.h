#ifndef PLAYSTATION_H
#define PLAYSTATION_H
#include "IConsole.h"
/* Concrete product */
class PlayStation:public IConsole
{
public:
	// Inherited via IConsol
	virtual void info() override;
};
#endif // !PLAYSTATION_H