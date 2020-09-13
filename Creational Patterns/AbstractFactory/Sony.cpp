#include "Sony.h"

IConsole* Sony::createConsole()
{
    return new PlayStation();
}

IGamepad* Sony::createGamepad()
{
    return new PSGamepad();
}
