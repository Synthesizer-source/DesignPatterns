#include "Adapter.h"
#include <iostream>
Adapter::Adapter(TypeC* typeC)
{
	this->typeC = typeC;
}

const char* Adapter::sendTypeAData() const
{
	printf("Adapter is converting TypeC data to conformable TypeA input...\n");
	return this->typeC->sendTypeCData();
}

