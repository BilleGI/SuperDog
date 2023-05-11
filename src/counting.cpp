#include "counting.h"
#include <iostream>

Counting::Counting(const std::string& countTalent) : Talent(countTalent) {};

std::string Counting::getTalent()
{
    return talent;
}
