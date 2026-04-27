#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    brain = new Brain();
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& c) : Animal(c)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*c.getBrain());  // nouveau Brain, pas une copie de pointeur
}

Cat::~Cat()
{
    delete brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow !" << std::endl;
}

Brain* Cat::getBrain() const
{
    return brain;
}

Cat& Cat::operator=(const Cat& c)
{
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &c)
    {
        Animal::operator=(c);
        delete brain;              // on supprime l'ancien Brain
        brain = new Brain(*c.getBrain());  // on crée un nouveau Brain
    }
    return (*this);
}
