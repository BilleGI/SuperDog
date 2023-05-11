#include "swimming.h"
#include <iostream>

Swimming::Swimming(const std::string& swimTalent) : Talent(swimTalent){};

std::string Swimming::getTalent()
{
    return talent;
}
