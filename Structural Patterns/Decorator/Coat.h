#ifndef COAT_H
#define COAT_H
#include "HumanDecorator.h"
class Coat:public HumanDecorator
{
private:
	std::string addCoat();
public:
	Coat(std::string color, IHuman* human);
	virtual std::string makeHuman() override;
};
#endif // !COAT_H