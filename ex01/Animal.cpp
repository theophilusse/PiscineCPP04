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

const Animal& Animal::operator=(const Animal & a)
{
     if (&a != this)
     {
          _type = a.getType();
     }
     return *this;	
}

std::string Animal::getType() const { return _type; }

void Animal::makeSound() const
{
    std::cout << "Eeek?" << std::endl;
}
