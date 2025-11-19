#include "Dog.hpp"
#include "support.hpp"
#include "Cat.hpp"

int main()
{
    // Basic creation and polymorphic deletion
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    j->makeSound();
    i->makeSound();
    delete j;
    delete i;

    // Deep copy test
    Dog original_dog;
    original_dog.getBrain()->setIdea(0, "Bones!");
    Cat original_cat;
    original_cat.getBrain()->setIdea(0, "Mice!");

    Dog copied_dog(original_dog);
    Cat copied_cat = original_cat;

    // Verify deep copy
    print("Original dog idea: " + original_dog.getBrain()->getIdea(0));
    print("Copied dog idea: " + copied_dog.getBrain()->getIdea(0));
    print("Original cat idea: " + original_cat.getBrain()->getIdea(0));
    print("Copied cat idea: " + copied_cat.getBrain()->getIdea(0));

    // Modify original and check copy unchanged
    original_dog.getBrain()->setIdea(0, "Squirrels!");
    original_cat.getBrain()->setIdea(0, "Birds!");
    print("After change – copied dog: " + copied_dog.getBrain()->getIdea(0));
    print("After change – copied cat: " + copied_cat.getBrain()->getIdea(0));

    // Polymorphic array
    Animal* zoo[10];
    for (int k = 0; k < 10; ++k)
		zoo[k] = (k % 2 == 0) ? static_cast<Animal*>(new Dog()) : static_cast<Animal*>(new Cat());
    for (int k = 0; k < 10; ++k)
        delete zoo[k];

    return 0;
}
