#ifndef XBOX_GAMEPAD_H
#define XBOX_GAMEPAD_H
#include "IGamepad.h"
/* Concrete product */
class XboxGamepad:public IGamepad
{
public:
	// Inherited via IGamepad
	virtual void info() override;
};
#endif // !XBOX_GAMEPAD_H