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
    int i = 0;
    while (i < 4)
    {
        if (other.inve[i] != NULL)
            this->inve[i] = other.inve[i]->clone();
        else
            this->inve[i] = NULL;
        i++;
    }
    std::cout << "Materia copy constructor called" << std::endl;
}
MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    if (this != &other)
    {
        int i = 0;
        while (i < 4)
        {
            if (this->inve[i] != NULL)
                delete (this->inve[i]);
            i++;
        }
        i = 0;
        while (i < 4)
        {
            if (other.inve[i] != NULL)
                this->inve[i] = other.inve[i]->clone();
            else
                this->inve[i] = NULL;
            i++;
        }
    }
    return (*this);
}
MateriaSource::~MateriaSource()
{
    int i = 0;
    while (i < 4)
    {
        if (this->inve[i] != NULL)
            delete (this->inve[i]);
        i++;
    }
    std::cout << "Materia destructor called" << std::endl;
}
void MateriaSource::learnMateria(AMateria* obj)
{
    int i = 0;
    while (i < 4)
    {
        if (this->inve[i] == NULL)
        {
            this->inve[i] = obj;
            break; 
        }
        i++;
    }
}
AMateria* MateriaSource::createMateria(std::string const & type)
{
    int i = 0;
    while (i < 4)
    {
        if (this->inve[i] != NULL)
        {
            if (this->inve[i]->getType() == type)
                return (this->inve[i]->clone());
        }
        i++;
    }
    return NULL;
}