#ifndef ICREATOR_H
#define ICREATOR_H
#include "IVehicle.h"
class ICreator
{
public:
	virtual IVehicle* create() = 0;
	virtual void info();
	~ICreator() {}

};

#endif // !ICREATOR_H


