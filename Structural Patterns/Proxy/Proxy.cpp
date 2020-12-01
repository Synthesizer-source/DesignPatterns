#include "Proxy.h"

Proxy::Proxy()
{
    printf("Created Proxy.\n");
    internet = new RealInternet();
    bannedSites.push_back("banned.com");
    bannedSites.push_back("bannedsite.com");
    bannedSites.push_back("nsfw.com");
}

Proxy::~Proxy()
{
    delete internet;
}

std::string Proxy::connect(std::string serverHost)
{
    auto it = std::find(bannedSites.begin(), bannedSites.end(), serverHost);

    if (it != bannedSites.end()) {
        return "Access Denied!!\n";
    }
    else {
        return internet->connect(serverHost);
    }

}
