#include <iostream>
#include "Facade.h"

void client() {
	Facade facade;

	facade.winterMode();
	facade.summerMode();
	facade.holidayMode();
}

int main() {

	client();

	system("pause");
	return 0;
}