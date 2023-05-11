#pragma once
#include <string>

class Talent
{
protected:
    std::string talent = "No talent";
public:
    Talent(const std::string& newTalent);
    virtual ~Talent() = default;
    virtual std::string getTalent() = 0;
};
