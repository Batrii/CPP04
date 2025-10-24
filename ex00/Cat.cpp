#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}
Cat::Cat(const Cat& other)
{
    this->type = other.type;
    std::cout << "Cat copy constructor called" << std::endl;
}
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    std::cout << "Cat assignement operator called" << std::endl;

}
Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
};
void Cat::makeSound()
{
    std::cout << "Meow Meow Meow" << std::endl;
};