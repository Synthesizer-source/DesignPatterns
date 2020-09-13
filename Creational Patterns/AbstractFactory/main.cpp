#include "Microsoft.h"
#include "Sony.h"

/* Client code*/
void Client(ICompany* company) {

	IConsole* console = company->createConsole();
	console->info();
	printf("---------------------------\n");
	IGamepad* gamepad = company->createGamepad();
	gamepad->info();
	printf("---------------------------\n");
	
}

int main(void) {
	
	Client(new Microsoft());
	Client(new Sony());

	return 0;
}