#ifndef REAL_INTERNET_H
#define REAL_INTERNET_H
#include "IInternet.h"
class RealInternet: public IInternet
{
public:
	// Inherited via IInternet
	virtual std::string connect(std::string serverHost) override;
};
#endif // !REAL_INTERNET_H