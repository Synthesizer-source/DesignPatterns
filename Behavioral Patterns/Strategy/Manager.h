#ifndef MANAGER_H
#define MANAGER_H
#include "IDatabase.h"
class Manager
{
private:
	IDatabase* database;
public:
	Manager(IDatabase* database);
	void insert();
	void update();
	void setDatabase(IDatabase* database);
};
#endif // !MANAGER_H