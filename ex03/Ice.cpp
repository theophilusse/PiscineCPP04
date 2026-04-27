#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::~Ice() {}

AMateria* Ice::clone() const
{
	Ice *ret;

	ret = new Ice();
	return (AMateria *)ret;
}

void Ice::use(ICharacter& target)
{
	std::cout << "* ICE arresting " << target.getName() << " *" << std::endl;
}
