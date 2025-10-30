#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal default constructor called" << std::endl;
}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    this->type = other.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    this->type = other.type;
    std::cout << "WrongAnimal operator assignement called" << std::endl;
    return *this;
}
WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}
void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal make his sound" << std::endl;
}
const std::string& WrongAnimal::getType() const
{
    return type;
}