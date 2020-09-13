#include "Microsoft.h"

IConsole* Microsoft::createConsole()
{
    return new Xbox();
}

IGamepad* Microsoft::createGamepad()
{
    return new XboxGamepad();
}
