#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = nullptr;
}

std::string const & Character::getName() const
{
	return (_name);
}

AMateria* Character::getMateria(int idx)
{
	return _materia[idx % 4];
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
		if (_materia[i] == nullptr)
		{
			_materia[i] = m->clone();
			break;
		}
}

void Character::unequip(int idx)
{
	_materia[idx % 4] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
	_materia[idx % 4]->use(target);
}

void Character::fart()
{
	std::cout << _name << " fart loudly" << std::endl;
}
