#include "Animal.hpp"

Animal::Animal() : _type("Creature")
{
    std::cout << "Animal default constructor called" << std::endl;
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

Animal& Animal::operator=(const Animal& a)
{
    std::cout << "Animal copy assignment operator called" << std::endl;
    if (this != &a)
        _type = a._type;
    return (*this);
}
