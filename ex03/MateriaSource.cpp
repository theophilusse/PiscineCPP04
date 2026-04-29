#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_memory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < 4; i++)
		delete _memory[i];
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
		if (!_memory[i])
		{
			_memory[i] = m;
			return;
		}
	std::cout << "Out of memory" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (size_t i = 0; i < 4; i++)
	{
		if (_memory[i]->getType() == type)
			return _memory[i];
	}
	return NULL;
}
