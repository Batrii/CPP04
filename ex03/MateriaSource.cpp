#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        this->inve[i] = NULL;
        i++;
    }
    std::cout << "Materia default constructor called" << std::endl;
}
MateriaSource::MateriaSource(const MateriaSource& other)
{
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{

}
MateriaSource::~MateriaSource()
{

}
void MateriaSource::learnMateria(AMateria* obj)
{

}
AMateria* MateriaSource::createMateria(std::string const & type)
{

}