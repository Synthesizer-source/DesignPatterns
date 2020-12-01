#ifndef FACADE_H
#define FACADE_H
#include "CoolingSystem.h"
#include "HeatSystem.h"
#include "SecuritySystem.h"

/*
	Facade pattern provides reduce of code blocks.
	This pattern can use when have many different classes, methods, subsystems and operations in project.
*/
class Facade
{
private:
	CoolingSystem coolingSystem;
	HeatSystem heatSystem;
	SecuritySystem securitySystem;
public:
	void winterMode();
	void summerMode();
	void holidayMode();
};
#endif // !FACADE_H