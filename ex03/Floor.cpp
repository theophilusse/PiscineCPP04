#include "Floor.hpp"

Floor::Floor() : _index(0)
{
	for (int i = 0; i < 100; i++)
		_materia[i] = nullptr;
}

Floor::~Floor()
{
	for (int i = 0; i < 100; i++)
		if (_materia[i] != nullptr)
			delete _materia[i];
}

Floor& Floor::operator+=(AMateria *m)
{
	if (this->_materia[_index % 100] != nullptr)
		delete this->_materia[_index % 100];
	this->_materia[_index % 100] = m;
	this->_index += 1;
	return *this;
}
