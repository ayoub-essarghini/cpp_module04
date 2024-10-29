#include "includes/Cat.hpp"

Cat::Cat(): brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat created" << std::endl;
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


