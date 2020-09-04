#include "Singleton.h"

int main(void) {

	//Singleton singleton = new Singleton(); --> Error
	Singleton::getInstance()->print(); // --> Print 0
	Singleton::getInstance()->setVar(99); // --> Variable equals to 99
	Singleton::getInstance()->print(); // --> Print 99

	return 0;
}