#include "TypeA.h"

TypeA::TypeA(const char* data)
{
    this->data = data;
}

const char* TypeA::sendTypeAData() const
{
    return this->data;
}
