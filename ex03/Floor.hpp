#ifndef FLOOR_HPP
# define FLOOR_HPP

# include "AMateria.hpp"

class Floor
{
private:
	AMateria *_materia[100];
	int _index;

public:
	Floor();
	~Floor();
    	Floor& operator+=(AMateria *m);
};

#endif
