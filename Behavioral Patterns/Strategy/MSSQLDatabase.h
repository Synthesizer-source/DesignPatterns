#ifndef MSSQLDATABASE_H
#define MSSQLDATABASE_H
#include "IDatabase.h"
class MSSQLDatabase: public IDatabase
{
public:
	// Inherited via IDatabase
	virtual void insert() override;
	virtual void update() override;
};
#endif // !MSSQLDATABASE_H