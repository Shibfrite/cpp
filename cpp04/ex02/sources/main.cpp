#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // This should fail to compile if uncommented:
    Animal* a = new Animal();  // error: Animal is abstract

    // Valid: polymorphic usage
    Animal* d = new Dog();
    Animal* c = new Cat();
    d->makeSound();
    c->makeSound();
    delete d;
    delete c;

    // Valid: stack objects
    Dog dog;
    Cat cat;
    dog.makeSound();
    cat.makeSound();

    return 0;
}
