#include "Revolver.h"
#include "Crossbow.h"
#include "FireSkill.h"
#include "SlowSkill.h"
/*
	--> Bridge is a structural design pattern that lets you split a large class or 
	a set of closely related classes into two separate hierarchies 
	(abstraction and implementation) which can be developed independently of each other.

*/
int main(void) {

	IWeapon* revolver1 = new Revolver(new FireSkill());
	IWeapon* revolver2 = new Revolver(new SlowSkill());

	IWeapon* crossbow1 = new Crossbow(new FireSkill());
	IWeapon* crossbow2 = new Crossbow(new SlowSkill());

	revolver1->attack();
	revolver2->attack();

	crossbow1->attack();
	crossbow2->attack();

	return 0;
}