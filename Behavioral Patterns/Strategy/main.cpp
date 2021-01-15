#include <iostream>
#include "Manager.h"
#include "MSSQLDatabase.h"
#include "MySQLDatabase.h"

void client() {

	Manager* manager = new Manager(new MSSQLDatabase());
	manager->insert();
	manager->update();

	manager->setDatabase(new MySQLDatabase());

	manager->insert();
	manager->update();

	delete manager;
}

int main() {

	client();
	return 0;
}