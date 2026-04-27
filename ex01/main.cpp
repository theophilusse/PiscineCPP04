#include "Dog.hpp"
#include "Cat.hpp"

using std::cout;
using std::endl;

int main (void)
{
	cout << "Deep Copy Test : ----------" << endl;
	Cat cat;
    cat.getBrain()->setIdea(0, "I want fish");
	cout << "cat's idea 0 : " << cat.getBrain()->getIdea(0) << endl;
	std::string *stringREF = cat.getBrain()->getIdeaAdress(0);
	cout << "adress of idea 0 of original cat : " << stringREF << endl;
	
	Cat catCopy;
	cout << "catcopy's idea 0 : " << catCopy.getBrain()->getIdea(0) << endl;
	stringREF = catCopy.getBrain()->getIdeaAdress(0);
	cout << "adress of idea 0 of catCopy before catcopy = cat : "  << stringREF << endl;
	
	catCopy = cat;
	stringREF = catCopy.getBrain()->getIdeaAdress(0);
	cout << "catcopy's idea 0 after catcopy = cat : "  << catCopy.getBrain()->getIdea(0) << endl;
	cout << "adress of idea 0 of catCopy after catcopy = cat : "  << stringREF << endl;
	
	cout << "End of Deep Copy Test : ----------" << endl;
	cout << "Subject Test : ----------" << endl;
	
	Animal *animalTab[4] = {new Cat, new Cat, new Dog, new Dog}; // tableau de pointeur

	for(size_t i = 0; i < 4; i++)
	{
		cout << animalTab[i]->getType() << " is saying ";
		animalTab[i]->makeSound();
	}
	for(size_t i = 0; i < 4; i++)
	{
		delete animalTab[i];
	}

	return (0);
}

