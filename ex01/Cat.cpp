#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &c) : Animal("Cat")
{
    _type = c.getType();
}

Cat::~Cat()
{
    if (brain)
        delete brain;
    brain = NULL;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow !" << std::endl;
}

Cat& Cat::operator=(const Cat & c)
{
    if (this != &c)
    {
         _type = c.getType();
         if (brain)
             delete brain;
         brain = new Brain(*c.getBrain());
    }
    return *this;
}

Brain* Cat::getBrain() const
{
    return brain;
}