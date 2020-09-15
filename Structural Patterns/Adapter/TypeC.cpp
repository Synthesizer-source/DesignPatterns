#include "TypeC.h"

TypeC::TypeC(const char* data)
{
    this->data = data;
}

const char* TypeC::sendTypeCData() const
{
    return this->data;
}
