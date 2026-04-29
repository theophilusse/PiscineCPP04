#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type) {}
AMateria::~AMateria() {}
    
std::string const & AMateria::getType() const
{
	return _type;
}

const AMateria& AMateria::operator=(const AMateria& m)
{
	if (this != &m)
	{
		_type = m.getType();
	}
	return *this;
}