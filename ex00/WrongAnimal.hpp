#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &w);
    WrongAnimal(std::string type);
    ~WrongAnimal();
    std::string getType() const;
    void makeSound() const;

    WrongAnimal& operator=(const WrongAnimal & w);
};

#endif
