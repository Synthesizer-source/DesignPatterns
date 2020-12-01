#include "CoolingSystem.h"
#include <iostream>
void CoolingSystem::operation(bool open)
{
	std::cout << "Cooling System : " << (open ? "Open" : "Close") << "\n";
}
