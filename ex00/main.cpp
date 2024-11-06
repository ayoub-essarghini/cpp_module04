#include "./includes/WrongAnimal.hpp"
#include "./includes/Animal.hpp"
#include "./includes/WrongCat.hpp"
#include "./includes/Cat.hpp"
#include "./includes/Dog.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();


    const WrongAnimal *k = new WrongCat();
    
    std::cout << k->getType() << " " << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    k->makeSound();
    meta->makeSound();
    delete meta;
    delete i;
    delete j;
    delete k;
    return 0;
}

