#include "Singleton.h"
#include <iostream>

Singleton* Singleton::instance; // --> Declare static variable in .cpp file

Singleton* Singleton::getInstance()
{	
	if (!instance)
		instance = new Singleton();
	return instance;
}

void Singleton::setVar(int _var)
{
	this->var = _var;
}

int Singleton::getVar()
{
	return this->var;
}

void Singleton::print()
{
	printf("Variable is : %d\n", this->var);
}
