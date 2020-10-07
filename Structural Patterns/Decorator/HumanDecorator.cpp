#include "HumanDecorator.h"


HumanDecorator::HumanDecorator(std::string color, IHuman* human)
{
    this->color = color;
    this->human = human;
}

std::string HumanDecorator::makeHuman()
{

    return this->color + " " + this->human->makeHuman();
}
