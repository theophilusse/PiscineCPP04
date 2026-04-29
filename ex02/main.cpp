#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    // Animal* a = new Animal();  // ERREUR : classe abstraite, ne compile pas

    std::cout << "--- Construction ---" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\n--- Sounds ---" << std::endl;
    j->makeSound();  // Woof
    i->makeSound();  // Meow

    std::cout << "\n--- Types ---" << std::endl;
    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    std::cout << "\n--- Deep copy Dog ---" << std::endl;
    Dog d1;
    d1.getBrain()->setIdea(0, "I want to eat");
    Dog d2(d1);
    std::cout << "d1 idea : " << d1.getBrain()->getIdea(0) << std::endl;
    std::cout << "d2 idea : " << d2.getBrain()->getIdea(0) << std::endl;
    d2.getBrain()->setIdea(0, "I want to sleep");
    std::cout << "d1 apres modif d2 : " << d1.getBrain()->getIdea(0) << std::endl;
    std::cout << "d2 apres modif d2 : " << d2.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n--- Tableau ---" << std::endl;
    const int   size = 6;
    Animal*     animals[size];

    //Animal *bug;
    //bug = new Animal(); // Not wroking test
    //bug->makeSound();

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();
    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    std::cout << "\n--- Destruction tableau ---" << std::endl;
    for (int i = 0; i < size; i++)
        delete animals[i];

    std::cout << "\n--- Destruction ---" << std::endl;
    delete j;
    delete i;

    return (0);
}
