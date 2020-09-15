#ifndef ADAPTER_H
#define ADAPTER_H
#include "TypeA.h"
#include "TypeC.h"
class Adapter:public TypeA
{
private:
	TypeC* typeC = nullptr;
public:
	Adapter(TypeC* typeC);
	virtual const char* sendTypeAData() const;
	
};
#endif // !ADAPTER_H



