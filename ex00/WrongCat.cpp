#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::~WrongCat() {}

WrongCat::WrongCat(const WrongCat &w) : WrongAnimal("WrongCat")
{
    _type = w.getType();
}

void WrongCat::makeSound() const
{
    std::cout << "SHHHHHHH !" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat & w)
{
    if (this != &w)
    {
         _type = w.getType();
    }
    return *this;
}