#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete meta;
    delete j;
    delete i;
    // ---------------------------
    std::cout << "---------------------------" << std::endl;
    const WrongAnimal* test = new WrongAnimal();
    // const WrongAnimal* j = new WrongDog();
    const WrongAnimal* a = new WrongCat();
    // std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    test->makeSound();
    // j->makeSound();
    a->makeSound();
    delete test;
    // delete j;
    delete a;
    return 0;
}