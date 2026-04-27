#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain* brain;
public:
    Cat();
    ~Cat();
    void makeSound() const;
    Brain *getBrain() const;

    Cat& operator=(const Cat &c);
};

#endif
