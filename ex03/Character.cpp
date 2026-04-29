#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
}

std::string const & Character::getName() const
{
	return (_name);
}

AMateria* Character::getMateria(int idx) const
{
	return _materia[idx % 4];
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
		if (_materia[i] == NULL)
		{
			_materia[i] = m;
			break;
		}
}

void Character::unequip(int idx)
{
	_materia[idx % 4] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	_materia[idx % 4]->use(target);
}

void Character::fart()
{
	std::cout << _name << " fart loudly" << std::endl;
}

Character& Character::operator=(const Character &c)
{
	if (this != &c)
	{
		_name = c.getName();
		for (int i = 0; i < 4; i++)
		{
			if (c.getMateria(i))
				_materia[i] = c.getMateria(i);
			else
				_materia[i] = NULL;
		}
	}
	return *this;
}
