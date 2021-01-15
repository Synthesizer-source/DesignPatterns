#include "Manager.h"

Manager::Manager(IDatabase* database)
{
	this->database = database;
}

void Manager::insert()
{
	database->insert();
}

void Manager::update()
{
	database->update();
}

void Manager::setDatabase(IDatabase* database)
{
	this->database = database;
}
