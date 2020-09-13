#include "Creators.h"

IVehicle* TankCreator::create()
{
	return new Tank();
}

IVehicle* ShipCreator::create()
{
	return new Ship();
}

IVehicle* PlaneCreator::create()
{
	return new Plane();
}
