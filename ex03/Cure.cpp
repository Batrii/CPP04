#include "Cure.hpp"

Cure::Cure()
{
    this->type = "Cure";
    std::cout << "Cure default constructor  called" << std::endl;
}
Cure::Cure(const Cure& other)
{
    this->type = other.type;
    std::cout << "Cure constructor called" << std::endl;
}
Cure& Cure::operator=(const Cure& other)
{
    if (this != &other)
    {
        AMateria::operator=(other);
    }
    return (*this);
}
Cure::~Cure()
{
    std::cout << "Cure destructor called" << std::endl;
}

AMateria* Cure::clone() const{
    return (new Cure());
}

void Cure::use(ICharacter& target){
    std::cout << "* shoots an ice bolt at" << target.getName() << " *" << std::endl;
}