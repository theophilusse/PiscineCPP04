#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
protected:
    std::string _type;

public:
    Animal();
    Animal(const Animal &a);
    Animal(std::string type);
    virtual ~Animal();
    virtual void makeSound() const;
    std::string getType() const;

    Animal& operator=(const Animal & a);
};

#endif
