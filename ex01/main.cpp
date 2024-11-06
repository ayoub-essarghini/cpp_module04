#include "includes/Animal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
int main()
{

    const int arraySize = 6;
    Animal *animals[arraySize];

    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
    }
    for (int i = arraySize / 2; i < arraySize; i++)
    {
        animals[i] = new Cat();
    }

    for (int i = 0; i < arraySize; i++)
    {
        animals[i]->makeSound();
    }

    for (int i = 0; i < arraySize; i++)
    {
        delete animals[i];
    }

    std::cout << "-------------Starting deep copy test----------------" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->ideas[0] = "Eat";

    Dog copiedDog = originalDog;

    originalDog.getBrain()->ideas[0] = "Bark";

    std::cout << "Original Dog's first idea: " << originalDog.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Dog's first idea: " << copiedDog.getBrain()->ideas[0] << std::endl;

    std::cout << "--------------End of deep copy test-------------" << std::endl;

         std::cout << "-------------Starting deep copy test  of Cat----------------" << std::endl;
    Cat originalCat;
    originalCat.getBrain()->ideas[0] = "Eat";

    Cat copiedCat = originalCat;

    originalCat.getBrain()->ideas[0] = "Maiw";

    std::cout << "Original Cat's first idea: " << originalCat.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Cat's first idea: " << copiedCat.getBrain()->ideas[0] << std::endl;

    std::cout << "--------------End of deep copy test of Cat-------------" << std::endl;

    return 0;
}