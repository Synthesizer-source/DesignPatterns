#include "Vehicles.h"
#include <iostream>
void Tank::attack()
{
    printf("Tank is attacking...\n");
}

const char* Tank::where()
{
    return "ground";
}

void Ship::attack()
{
    printf("Ship is attacking...\n");
}

const char* Ship::where()
{
    return "sea";
}

void Plane::attack()
{
    printf("Plane is attacking...\n");
}

const char* Plane::where()
{
    return "air";
}
