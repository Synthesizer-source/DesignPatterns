#include "Facade.h"
#include <iostream>
void Facade::winterMode()
{
	std::cout << "WINTER MODE ACTIVATED.\n";
	std::cout << "-------------------------------------\n";
	this->coolingSystem.operation(false);
	this->heatSystem.opearation(true);
	this->securitySystem.operation(false);
	std::cout << "\n";
}

void Facade::summerMode()
{
	std::cout << "SUMMER MODE ACTIVATED.\n";
	std::cout << "-------------------------------------\n";
	this->coolingSystem.operation(true);
	this->heatSystem.opearation(false);
	this->securitySystem.operation(false);
	std::cout << "\n";
}

void Facade::holidayMode()
{
	std::cout << "HOLIDAY MODE ACTIVATED.\n";
	std::cout << "-------------------------------------\n";
	this->coolingSystem.operation(false);
	this->heatSystem.opearation(false);
	this->securitySystem.operation(true);
	std::cout << "\n";
}
