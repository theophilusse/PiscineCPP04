#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    std::cout << "--- Polymorphisme correct ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j    = new Dog();
    const Animal* i    = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;
    i->makeSound();     // Meow
    j->makeSound();     // Woof
    meta->makeSound();  // ...

    std::cout << "\n--- Destruction correcte (virtual) ---" << std::endl;
    delete meta;
    delete j;  // appelle ~Dog puis ~Animal
    delete i;  // appelle ~Cat puis ~Animal

    std::cout << "\n--- Polymorphisme incorrect ---" << std::endl;
    const WrongAnimal* w    = new WrongAnimal();
    const WrongAnimal* wCat = new WrongCat();

    wCat->makeSound();  // affiche le son de WrongAnimal, pas WrongCat !
    w->makeSound();

    std::cout << "\n--- Destruction incorrecte (pas virtual) ---" << std::endl;
    delete w;    // OK
    delete wCat; // appelle seulement ~WrongAnimal, pas ~WrongCat !

    return (0);
}