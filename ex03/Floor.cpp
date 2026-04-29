#include "Floor.hpp"

Floor::Floor() : _index(0)
{
	for (int i = 0; i < 100; i++)
		_materia[i] = NULL;
}

Floor::~Floor()
{
	for (int i = 0; i < 100; i++)
		if (_materia[i] != NULL)
			delete _materia[i];
}

Floor& Floor::operator+=(AMateria *m)
{
	if (this->_materia[_index % 100] != NULL)
		delete this->_materia[_index % 100];
	this->_materia[_index % 100] = m;
	this->_index += 1;
	return *this;
}
