#pragma once
#include "talent.h"

class Counting : public Talent
{
    // some date
public:
    Counting(const std::string& countTalent);
    std::string getTalent() override;
};
