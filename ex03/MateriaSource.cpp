#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {}
MateriaSource::~MateriaSource()
{
	std::unordered_map<std::string, AMateria*>::iterator it;

	for (it = _memory.begin(); it != _memory.end(); it++)
		delete it->second;
	_memory.clear();
}

void MateriaSource::learnMateria(AMateria* m)
{
	_memory[m->getType()] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::unordered_map<std::string, AMateria*>::iterator it = _memory.find(type);
	if (it != _memory.end())
		return it->second->clone();
	return nullptr;
}
