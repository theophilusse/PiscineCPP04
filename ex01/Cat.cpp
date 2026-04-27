#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
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
         ((Animal *)this) = (Animal *)&c;
         if (brain)
             delete brain;
         brain = new Brain(c.getBrain());
    }
    return *this;
}

Brain* Cat::getBrain() const
{
    return brain;
}
