#include "includes/AAnimal.hpp"
#include "includes/Dog.hpp"
#include "includes/Cat.hpp"
int main()
{

 

    const int arraySize = 6;
    AAnimal *animals[arraySize];

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

    std::cout << "-------------Starting deep copy test of Dog----------------" << std::endl;
    Dog originalDog;
    originalDog.getBrain()->ideas[0] = "Eat";

    Dog copiedDog = originalDog;

    originalDog.getBrain()->ideas[0] = "Bark";

    std::cout << "Original Dog's first idea: " << originalDog.getBrain()->ideas[0] << std::endl;
    std::cout << "Copied Dog's first idea: " << copiedDog.getBrain()->ideas[0] << std::endl;

    std::cout << "--------------End of deep copy test  of Dog-------------" << std::endl;


   

    return 0;
}