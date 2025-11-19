#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // Basic polymorphism test
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << std::endl;
    std::cout << i->getType() << std::endl;

    i->makeSound();
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    // Copy constructor and assignment tests
    Dog d1;
    Dog d2(d1);
    Dog d3;
    d3 = d1;

    Cat c1;
    Cat c2(c1);
    Cat c3;
    c3 = c1;

    // Wrong hierarchy test
    const WrongAnimal* wmeta = new WrongAnimal();
    const WrongAnimal* wcat = new WrongCat();

    std::cout << wcat->getType() << std::endl;
    wcat->makeSound();
    wmeta->makeSound();

    delete wmeta;
    delete wcat;

    // Polymorphic array test
    Animal* arr[4];
    for (int k = 0; k < 4; ++k)
		arr[k] = (k % 2) ? static_cast<Animal*>(new Cat()) : static_cast<Animal*>(new Dog());
    for (int k = 0; k < 4; ++k) {
        arr[k]->makeSound();
        delete arr[k];
    }

    return 0;
}
