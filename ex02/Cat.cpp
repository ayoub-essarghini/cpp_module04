#include "includes/Cat.hpp"

Cat::Cat(): brain(new Brain())
{
    type = "Cat";
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal(other)
{
    std::cout << "Cat copy constructor called" << std::endl;
    brain = new Brain(*other.brain);  
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        if (brain)
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


