#include "Computer.h"
#include <iostream>
Computer::Computer(TypeA* input)
{
	this->input = input;
}

void Computer::showData()
{
	printf("Computer display -> %s.\n", this->input->sendTypeAData());
}
