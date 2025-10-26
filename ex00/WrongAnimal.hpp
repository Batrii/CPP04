#ifndef WANIMAL_HPP
#define WANIMAL_HPP

#include <string>
#include <iostream>


class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        WrongAnimal& operator=(const WrongAnimal& other);
        ~WrongAnimal();
        void makeSound() const;
        const std::string& getType(void) const;
};











#endif