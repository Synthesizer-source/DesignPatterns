#ifndef MYSQLDATABASE_H
#define MYSQLDATABASE_H
#include "IDatabase.h"
class MySQLDatabase:public IDatabase
{
public:
	// Inherited via IDatabase
	virtual void insert() override;
	virtual void update() override;
};
#endif // !MYSQLDATABASE_H