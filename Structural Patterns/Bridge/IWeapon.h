#ifndef IWEAPON_H
#define IWEAPON_H
#include <iostream>
class IWeapon
{
public:
	virtual void attack() const = 0;
};
#endif // !IWEAPON_H