#include "Dog.hpp"

Dog::Dog() : Animal("Dog") { std::cout << "Dog default constructor called" << std::endl; }

Dog::~Dog() { std::cout << "Dog destructor called" << std::endl; }

Dog::Dog(const Dog &d) : Animal("Dog")
{
    _type = d.getType();
}

void Dog::makeSound() const
{
    std::cout << "Waf Woof !" << std::endl;
}

Dog& Dog::operator=(const Dog & d)
{
    if (this != &d)
    {
         _type = d.getType();
    }
    return *this;
}