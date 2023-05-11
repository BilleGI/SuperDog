#pragma once
#include "talent.h"

class Swimming : public Talent
{
    // some data

public:
    Swimming(const std::string& swimTalent);
    std::string getTalent() override;
};
