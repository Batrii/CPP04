#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal default constructor called" << std::endl;
};
Animal::Animal(const Animal& other)
{
    this->type = other.type;
    std::cout << "Animal copy constructor called" << std::endl;
};
Animal& Animal::operator=(const Animal& other)
{
    this->type = other.type;
    std::cout << "Animal operator assignement called" << std::endl;
    return *this;
};
Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
};
void Animal::makeSound() const
{
    std::cout << "Animal make his sound" << std::endl;
};
const std::string& Animal::getType() const
{
    return type;
}