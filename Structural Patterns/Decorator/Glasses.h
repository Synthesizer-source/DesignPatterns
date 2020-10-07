#ifndef GLASSES_H
#define GLASSES_H
#include "HumanDecorator.h"
class Glasses:public HumanDecorator
{
private:
	std::string addGlasses();
public:
	Glasses(std::string color, IHuman* human);
	virtual std::string makeHuman() override;
	
};
#endif // !GLASSES_H