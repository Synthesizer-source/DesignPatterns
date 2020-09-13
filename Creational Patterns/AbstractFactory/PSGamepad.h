#ifndef PS_GAMEPAD_H
#define PS_GAMEPAD_H
#include "IGamepad.h"
/* Concrete product */
class PSGamepad: public IGamepad
{
public:
	// Inherited via IGamepad
	virtual void info() override;
};
#endif // !PS_GAMEPAD_H