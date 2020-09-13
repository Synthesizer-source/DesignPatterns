#include "Creators.h"
#include "Vehicles.h"

int main(void) {
	ICreator* tankCreator = new TankCreator();
	IVehicle* tank = tankCreator->create();
	tankCreator->info();
	tank->attack();

	ICreator* shipCreator = new ShipCreator();
	IVehicle* ship = shipCreator->create();
	shipCreator->info();
	ship->attack();

	ICreator* planeCreator = new PlaneCreator();
	IVehicle* plane = planeCreator->create();
	planeCreator->info();
	plane->attack();
	
	return 0;
}