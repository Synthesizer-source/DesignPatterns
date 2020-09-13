#ifndef ICOMPANY_H
#define ICOMPANY_H
#include "IConsole.h"
#include "IGamepad.h"
/*	Abstract factory interface has some pure virtual functions.
	This functions create objects and return.
	This pattern create multiple type of objects but Factory Method pattern create one type of objects.
*/
class ICompany
{
public:
	virtual IConsole* createConsole() = 0;
	virtual IGamepad* createGamepad() = 0;
};
#endif // !ICOMPANY_H