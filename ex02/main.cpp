#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
    // const Animal* meta = new Animal();
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // j->makeSound();
    // // meta->makeSound();
    // // delete meta;
    // delete j;
    // delete i;

    Animal* meta[10];

    int i = 0;
    while (i < 10)
    {
        if (i < 5)
            meta[i] = new Dog();
        else
            meta[i] = new Cat();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        meta[i]->makeSound();
        i++;
    }
    i = 0;
    while (i < 10)
    {
        delete meta[i];
        i++;
    }
    return 0;
}