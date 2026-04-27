#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materia[4];

public:
	Character(std::string name);
	~Character() {}
	std::string const & getName() const;
	AMateria* getMateria(int idx);
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	void fart(void);
};

#endif
