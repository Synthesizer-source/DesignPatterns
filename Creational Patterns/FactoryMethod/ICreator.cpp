#include "ICreator.h"
#include <iostream>
void ICreator::info()
{
	IVehicle* vehicle = this->create();
	printf("Vehicle spawned in %s.\n", vehicle->where());
	delete vehicle;
}
