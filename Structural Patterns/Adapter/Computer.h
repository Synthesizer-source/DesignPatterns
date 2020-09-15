#ifndef COMPUTER_H
#define COMPUTER_H
#include "TypeA.h"
class Computer
{
private:
	TypeA* input = nullptr;
public:
	Computer(TypeA* input);
	void showData();

};
#endif // !COMPUTER_H



