#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    brain = new Brain();
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& d) : Animal(d)
{
    std::cout << "Dog copy constructor called" << std::endl;
    brain = new Brain(*d.getBrain());  // nouveau Brain, pas une copie de pointeur
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Waf Woof !" << std::endl;
}

Brain* Dog::getBrain() const
{
    return brain;
}

Dog& Dog::operator=(const Dog& d)
{
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &d)
    {
        Animal::operator=(d);
        delete brain;              // on supprime l'ancien Brain
        brain = new Brain(*d.getBrain());  // on crée un nouveau Brain
    }
    return (*this);
}
