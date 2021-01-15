#ifndef IDATABASE_H
#define IDATABASE_H
#include <iostream>
class IDatabase
{
public:
	virtual void insert() = 0;
	virtual void update() = 0;
};
#endif // !IDATABASE_H