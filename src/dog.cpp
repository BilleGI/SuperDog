#include "dog.h"
#include "swimming.h"
#include "dancing.h"
#include "counting.h"
#include <iostream>
#include <algorithm>
#include <cmath>

enum LISTTALENT
{
    SWIMMING = 1,
    DANCING = 2,
    COUNTING = 4,
};

void checkName(std::string& name)
{
    while(true)
    {
        auto it = std::find_if(name.begin(), name.end(), [](const char &c)
        {
            return !std::isalpha(c);
        });
        if(it == name.end()) break;
        std::cout << "Enter the correct name: ";
        std::getline(std::cin, name);
    }
}

void printList()
{
    std::cout << "List talent: " << std::endl;
    std::cout << "SWIMMING = 0" << std::endl;
    std::cout << "DANCING = 1" << std::endl;
    std::cout << "COUNTING = 2" << std::endl;
    std::cout << "exet = -1" << std::endl;
}

std::string initTalent(int& num)
{
    std::string talent;
    if(pow(2, num) == LISTTALENT::SWIMMING) talent = "Swim";
    else if(pow(2, num) == LISTTALENT::DANCING) talent = "Dance";
    else if(pow(2,num) == LISTTALENT::COUNTING) talent = "Count";
    return talent;
}

Dog::Dog(std::string& name)
{
    checkName(name);
    this->name = name;
    std::cout << "Enter the age dog: ";
    while(true)
    {
        std::cin >> age;
        if(age > 0 && age < 30)
            break;
        std::cout << "Enter the correct age: ";
    }

    int  numTalent;
    printList();
    do
    {
        std::string newTalent;
        bool flag = false;
        std::cout << "Command: " ;
        std::cin >> numTalent;
        newTalent = initTalent(numTalent);
        for(int i = 0; i < talents.size(); ++i)
        {
            if(newTalent == talents[i]->getTalent())
            {
                flag = true;
                break;
            }
        }
        if(pow(2, numTalent) == LISTTALENT::SWIMMING && !flag)
            talents.emplace_back( new Swimming(newTalent));
        else if(pow(2, numTalent) == LISTTALENT::DANCING && !flag)
            talents.emplace_back( new Dancing(newTalent));
        else if(pow(2, numTalent) == LISTTALENT::COUNTING && !flag)
            talents.emplace_back( new Counting(newTalent));

    }while((numTalent != -1 || talents.empty()) && (talents.size() < 3));
}

Dog::~Dog()
{
    for(int i = 0; talents[i] == nullptr; ++i)
    {
        delete talents[i];
    }
}

void Dog::showTalent()const
{
    for(int i =0; i < talents.size(); ++i)
    {
        std::cout << "It can \"" << talents[i]->getTalent()<<"\"" << std::endl;
    }
}

std::string Dog::getNameDog()
{
    return name;
}

int Dog::getAge()
{
    return age;
}
