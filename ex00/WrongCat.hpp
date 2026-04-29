#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &w);
    ~WrongCat();
    void makeSound() const;

    WrongCat& operator=(const WrongCat & w);
};

#endif
