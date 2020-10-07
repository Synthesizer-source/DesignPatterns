#include "Coat.h"


Coat::Coat(std::string color, IHuman* human) : HumanDecorator(color, human)
{
}

std::string Coat::makeHuman()
{
    return this->human->makeHuman() + this->addCoat();
}

std::string Coat::addCoat()
{
    return this->color + " coat, ";
}
