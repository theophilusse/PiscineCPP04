#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
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

const Dog& Dog::operator=(const Dog & d)
{
    if (this != &c)
    {
         ((Animal *)this) = (Animal *)&c;
         if (brain)
             delete brain;
         brain = new Brain(d.getBrain());
    }
    return *this;
}

Brain* Dog::getBrain()
{
    return brain;
}
