#include <iostream>
#include <vector>
#include "dog.h"

int main()
{
    std::vector<Dog> dogs;
    std::cout << "Dog talent program." << std::endl;

    for(int i = 0; ; ++i)
    {

        for(int j =0; j < 40; ++j)
            std::cout << "-";
        std::cout << std::endl;
        std::string nameDog;
        std::cout << "Name " << i << " of the dog: " <<std::endl;
        getline(std::cin, nameDog);
        dogs.emplace_back(nameDog);
        char exet;
        std::cout << "Add dogs? [y/n] " << std::endl;
        std::cin >> exet;
        std::cout << std::endl;
        if(exet == 'n')
            break;
        std::cin.get();
    }

    for(int i = 0; i < dogs.size(); ++i)
    {
        for(int j = 0; j < 40; ++j)
            std::cout << "/";
        std::cout << "\nThis is " << dogs[i].getNameDog() << " age " << dogs[i].getAge() << " and it has some talents:" << std::endl;
        dogs[i].showTalent();
        std::cout << std::endl;
    }
    return 0;
}
