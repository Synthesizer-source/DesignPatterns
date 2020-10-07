#include "Hat.h"



Hat::Hat(std::string color, IHuman* human) : HumanDecorator(color, human)
{
}

std::string Hat::makeHuman()
{
    return this->human->makeHuman() + this->addHat();
}

std::string Hat::addHat()
{
    return this->color + " hat, ";
}
