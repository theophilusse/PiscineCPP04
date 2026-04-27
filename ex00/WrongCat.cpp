#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "SHHHHHHH !" << std::endl;
}
