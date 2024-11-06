#include "includes/Cat.hpp"

Cat::Cat() :Animal("Cat"), brain(new Brain())
{
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &other) :Animal("Cat"),brain(new Brain(*other.brain))
{
    std::cout << "Cat copied" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        delete brain;
        brain = new Brain(*other.brain);
        std::cout << "Cat assigned" << std::endl;
    }
    return *this;
}

Cat::~Cat()
{
     if (brain)
        delete brain;
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Miaaw!" << std::endl;
}

Brain *Cat::getBrain() const
{
    return brain;
}


