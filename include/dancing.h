#pragma once
#include "talent.h"

class Dancing : public Talent
{
    //some data
public:
    Dancing(const std::string& danceTalent);
    std::string getTalent() override;
};
