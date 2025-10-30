#include "Dog.hpp"

Dog::Dog()
{
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}
Dog::Dog(const Dog& other)
{
    this->brain = new Brain();
    this->brain->operator=(*other.brain);
    this->type = other.type;
    std::cout << "Dog copy constructor called" << std::endl;
}
Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->brain->operator=(*other.brain);
        this->type = other.type;
    }
    std::cout << "Dog assignement operator called" << std::endl;
    return *this;
}
Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}
void Dog::makeSound() const
{
    std::cout << "Woof Woof" << std::endl;
}