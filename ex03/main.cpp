#include "AMateria.hpp"
#include "Floor.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main()
{
	Floor *floor = new Floor();

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	tmp = dynamic_cast<Character*>(me)->getMateria(0);
	me->unequip(0);
	*floor += tmp;
	tmp = nullptr;

	delete bob;
	delete me;
	delete src;
	delete floor;

	return 0;
}
