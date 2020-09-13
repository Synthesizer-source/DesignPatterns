#ifndef CREATORS_H
#define CREATORS_H
#include "ICreator.h"
#include "Vehicles.h"
class TankCreator:public ICreator
{
public:	// Inherited via ICreator
	virtual IVehicle* create() override;
};

class ShipCreator:public ICreator
{
public:	// Inherited via ICreator
	virtual IVehicle* create() override;
};

class PlaneCreator :public ICreator
{
public:	// Inherited via ICreator
	virtual IVehicle* create() override;
};

#endif // !CREATORS_H

