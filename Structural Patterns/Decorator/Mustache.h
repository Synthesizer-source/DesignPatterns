#ifndef MUSTACHE_H
#define MUSTACHE_H
#include "HumanDecorator.h"
class Mustache:public HumanDecorator
{
private:
	std::string addMustache();
public:
	Mustache(std::string color, IHuman* human);
	virtual std::string makeHuman() override;
	
};
#endif // !MUSTACHE_H