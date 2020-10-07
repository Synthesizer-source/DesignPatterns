#ifndef HUMANDECORATOR_H
#define HUMANDECORATOR_H
#include "IHuman.h"
#include <string>
class HumanDecorator: public IHuman
{
protected:
	std::string color = "white";
	IHuman* human;
public:
	HumanDecorator(std::string color, IHuman* human);
	// Inherited via IHuman
	virtual std::string makeHuman() override;

};
#endif // !HUMANDECORATOR_H