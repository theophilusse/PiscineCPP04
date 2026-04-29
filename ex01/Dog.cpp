#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &d) : Animal("Dog")
{
    _type = d.getType();
}

Dog::~Dog()
{
    if (brain)
         delete brain;
    brain = NULL;
    std::cout << "Dog destructor called" << std::endl;
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
         if (brain)
             delete brain;
         brain = new Brain(*d.getBrain());
    }
    return *this;
}

Brain* Dog::getBrain() const
{
    return brain;
}