#ifndef IINTERNET_H
#define IINTERNET_H
#include <iostream>
#include <string>
class IInternet
{
public:
	virtual std::string connect(std::string serverHost) = 0 ;
};
#endif // !IINTERNET_H