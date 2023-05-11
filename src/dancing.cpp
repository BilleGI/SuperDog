#include "dancing.h"
#include <iostream>

Dancing::Dancing(const std::string& danceTalent) : Talent(danceTalent){};

std::string Dancing::getTalent()
{
    return talent;
}
