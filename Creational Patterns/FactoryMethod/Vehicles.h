#ifndef VEHICLES_H
#define VEHICLES_H
#include "IVehicle.h"
class Tank:public IVehicle
{
public:	// Inherited via IVehicle
	virtual void attack() override;
	virtual const char* where() override;
};

class Ship:public IVehicle 
{
public:	// Inherited via IVehicle
	virtual void attack() override;
	virtual const char* where() override;
};

class Plane :public IVehicle
{
public:	// Inherited via IVehicle
	virtual void attack() override;
	virtual const char* where() override;
};
#endif // !VEHICLES_H

