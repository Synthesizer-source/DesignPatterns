#ifndef IHUMAN_H
#define IHUMAN_H
#include <string>
class IHuman
{
public:
	virtual std::string makeHuman() = 0;
};
#endif // !IHUMAN_H