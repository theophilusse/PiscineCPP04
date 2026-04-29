#include "Animal.hpp"

Animal::Animal() : _type("Creature")
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &a)
{
    _type = a.getType();
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal constructor called with " << type << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << "Eeek?" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

Animal& Animal::operator=(const Animal & a)
{
    if (this != &a)
    {
         _type = a.getType();
    }
    return *this;
}
