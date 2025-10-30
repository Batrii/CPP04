#include "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat& other)
{
    this->brain = new Brain();
    *this->brain = *other.brain;
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        *this->brain = *other.brain;
        this->type = other.type;
    }
    std::cout << "Cat assignement operator called" << std::endl;
    return *this;
}
Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}
void Cat::makeSound() const
{
    std::cout << "Meow Meow Meow" << std::endl;
}