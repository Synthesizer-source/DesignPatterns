#include "Computer.h"
#include "TypeC.h"
#include "Adapter.h"
int main(void) {

	TypeA* typeA = new TypeA("TypeA data");
	TypeC* typeC = new TypeC("TypeC data");

	Computer* computer = new Computer(typeA);
	computer->showData();

	// Computer* computer2 = new Computer(typeC); --> This line will error.
	Computer* computer3 = new Computer(new Adapter(typeC)); // --> But it works with using Adapter.
	computer3->showData();

	delete computer3;
	delete computer;
	delete typeA;
	delete typeC;

	return 0;
}