#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "AMateria default constrcutor called." << std::endl;
}
AMateria::AMateria(std::string const & type)
{
    this->type = type;
    std::cout << "AMateria constructor called"  << std::endl;
}
AMateria::AMateria(const AMateria& other)
{
    this->type = other.type;
}
AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return (*this);
}
AMateria::~AMateria()
{
    std::cout << "AMateria destructor called" << std::endl;
}

std::string const & AMateria::getType() const
{
    return this->type;
}