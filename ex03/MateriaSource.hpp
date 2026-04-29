#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <vector>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria* _memory[4];

public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria* m);
	AMateria* createMateria(std::string const & type);
};

#endif
