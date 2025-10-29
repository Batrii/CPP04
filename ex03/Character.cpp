#include "Character.hpp"

Character::Character()
{
    this->name = "nameless";
    int i = 0;
    while (i < 4)
    {
        this->inv[i] = NULL;
        i++;
    }
    std::cout << "Character default constructor" << std::endl;
}
Character::Character(const std::string name)
{
    this->name = name;
    int i = 0;
    while (i < 4)
    {
        this->inv[i] = NULL;
        i++;
    }
    std::cout << "Character constructor called" << std::endl;
}
Character::Character(const Character& other)
{
    this->name = other.name;
    int i = 0;
    while (i < 4)
    {
        if (other.inv[i] != NULL)
            this->inv[i] = other.inv[i]->clone();
        else
            this->inv[i] = NULL;
        i++;
    }
    std::cout << "Character copy constructor called" << std::endl;
}
Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        this->name = other.name;
        int i = 0;
        while (i < 4)
        {
            if (this->inv[i] != NULL)
                delete (this->inv[i]);
            i++;
        }
        i = 0;
        while (i < 4)
        {
            if (other.inv[i] != NULL)
                this->inv[i] = other.inv[i]->clone();
            else
                this->inv[i] = NULL;
            i++;
        }
    }
    return (*this);
}
std::string const & Character::getName() const
{
    return (this->name);
}
void Character::equip(AMateria* m)
{
    int i = 0;
    while (i < 4)
    {
        if (this->inv[i] == NULL)
        {
            this->inv[i] = m;
            break;
        }
        i++;
    }
    std::cout << "Character equiped" << std::endl;
}
void Character::unequip(int idx)
{

}
void Character::use(int idx, ICharacter& target)
{
    if (this->inv[idx] != NULL)
        this->inv[idx]->use(target);
    else
        std::cout << "i can do nothing" << std::endl;
}
Character::~Character()
{
    int i = 0;
    while (i < 4)
    {
        if (this->inv[i] != NULL)
            delete (this->inv[i]);
        i++;
    }
    std::cout << "Character destructor called" << std::endl;
}