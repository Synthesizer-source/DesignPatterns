#include "Proxy.h"

/* Client Code */
void Client(IInternet* internet) {
	
	printf("%s", internet->connect("facebook.com").c_str()); // All of them connect.
	std::cout << internet->connect("amazon.com"); // All of them connect.
	std::cout << internet->connect("banned.com"); // Just real internet connect. Proxy can not connect this host.

}

int main(void) {
	RealInternet* realInternet = new RealInternet();
	Client(realInternet);

	Proxy* proxy = new Proxy();
	Client(proxy);

	system("pause");
	return 0;
}