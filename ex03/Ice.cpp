#include "Ice.hpp"

Ice::Ice()
{
    this->type = "Ice";
    std::cout << "Ice default constructor  called" << std::endl;
}
Ice::Ice(const Ice& other)
{
    this->type = other.type;
    std::cout << "Ice constructor called" << std::endl;
}
Ice& Ice::operator=(const Ice& other)
{
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return (*this);
}
Ice::~Ice()
{
    std::cout << "Ice destructor called" << std::endl;
}

AMateria* Ice::clone() const{
    return (new Ice());
}