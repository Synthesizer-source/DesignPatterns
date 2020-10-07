#include "Mustache.h"
#include <string>
Mustache::Mustache(std::string color, IHuman* human) : HumanDecorator(color, human)
{

}
std::string Mustache::makeHuman()
{
    return this->human->makeHuman() + this->addMustache();
}

std::string Mustache::addMustache()
{
    return this->color + " mustache, ";
}
