#ifndef SONY_H
#define SONY_H
#include "ICompany.h"
#include "PlayStation.h"
#include "PSGamepad.h"
/* Concrete factory */
class Sony:public ICompany
{
public:
	// Inherited via ICompany
	virtual IConsole* createConsole() override;
	virtual IGamepad* createGamepad() override;
};
#endif // !SONY_H