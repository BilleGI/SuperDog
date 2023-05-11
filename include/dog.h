#pragma once
#include "talent.h"
#include <string>
#include <vector>

class Dog
{
    std::string name;
    int age;
    std::vector<Talent*> talents;
public:
    Dog(std::string& name);
    ~Dog();
    void showTalent() const;
    std::string getNameDog();
    int getAge();
};
