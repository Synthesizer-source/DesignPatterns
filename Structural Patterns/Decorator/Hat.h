#ifndef HAT_H
#define HAT_H
#include "HumanDecorator.h"
class Hat:public HumanDecorator
{
private:
	std::string addHat();
public:
	Hat(std::string color, IHuman* human);
	virtual std::string makeHuman() override;
};
#endif // !HAT_H