#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Creature")
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &w)
{
    _type = w.getType();
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
    std::cout << "WrongAnimal constructor called with " << type << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Bwee" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal & w)
{
    if (this != &w)
    {
         _type = w.getType();
    }
    return *this;
}