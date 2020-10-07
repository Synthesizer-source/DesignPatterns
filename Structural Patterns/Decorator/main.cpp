#include "DefaultHuman.h"
#include "Mustache.h"
#include "Glasses.h"
#include "Coat.h"
#include "Hat.h"
#include <iostream>
int main(void) {

	IHuman* walterWhite = new HumanDecorator("White", new Glasses("Black", new Coat("Black", new Hat("Black", new DefaultHuman()))));
	
	std::cout << "Walter Whiter : " <<walterWhite->makeHuman() << std::endl;

	IHuman* pala = new HumanDecorator("White", new Glasses("Black", new Coat("Brown", new Mustache("Thick", new DefaultHuman()))));

	std::cout << "Pala : " << pala->makeHuman() << std::endl;

	system("pause");
	return 0;
}