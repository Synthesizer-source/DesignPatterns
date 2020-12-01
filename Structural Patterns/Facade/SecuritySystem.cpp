#include "SecuritySystem.h"
#include <iostream>
void SecuritySystem::operation(bool open)
{
	std::cout << "Security System : " << (open ? "Open" : "Close") << "\n";
}
