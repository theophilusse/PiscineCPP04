#include "Cat.hpp"

Cat::Cat() : Animal("Cat") { std::cout << "Cat default constructor called" << std::endl; }

Cat::~Cat() { std::cout << "Cat destructor called" << std::endl; }

Cat::Cat(const Cat &c) : Animal("Cat")
{
    _type = c.getType();
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
    }
    return *this;
}