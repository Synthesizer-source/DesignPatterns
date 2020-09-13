#ifndef IVEHICLE_H
#define IVEHICLE_H
class IVehicle
{
public:
	virtual void attack() = 0;
	virtual const char* where() = 0;
	~IVehicle() {}
};


#endif // !IVEHICLE_H


