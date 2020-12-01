#ifndef PROXY_H
#define PROXY_H
#include "IInternet.h"
#include "RealInternet.h"
#include <vector>
class Proxy: public IInternet
{
private:
	RealInternet* internet = nullptr;
	std::vector<std::string> bannedSites;

public:
	Proxy();
	~Proxy();
	// Inherited via IInternet
	virtual std::string connect(std::string serverHost) override;
};
#endif // !PROXY_H