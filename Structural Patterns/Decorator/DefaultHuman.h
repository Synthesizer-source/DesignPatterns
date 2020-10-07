#ifndef DEFAULTHUMAN_H
#define DEFAULTHUMAN_H
#include "IHuman.h"
class DefaultHuman : public IHuman
{
public: // Inherited via IHuman
	virtual std::string makeHuman() override;
};
#endif // !DEFAULTHUMAN_H