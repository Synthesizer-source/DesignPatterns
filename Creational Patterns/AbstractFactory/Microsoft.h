#ifndef MICROSOFT_H
#define MICROSOFT_H
#include "ICompany.h"
#include "Xbox.h"
#include "XboxGamepad.h"
/* Concrete factory */
class Microsoft:public ICompany
{
public:
	// Inherited via ICompany
	virtual IConsole* createConsole() override;
	virtual IGamepad* createGamepad() override;
};
#endif // !MICROSOFT_H