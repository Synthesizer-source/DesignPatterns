#include "Glasses.h"
#include <string>

Glasses::Glasses(std::string color, IHuman* human) : HumanDecorator(color, human)
{

}

std::string Glasses::makeHuman()
{
	return this->human->makeHuman()+this->addGlasses();
}

std::string Glasses::addGlasses()
{
	return this->color + " glasses, ";
}
