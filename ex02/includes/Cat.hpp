#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

using std::cout;
using std::endl;

class Cat : public AAnimal
{
private:
    Brain *brain;

public:
    Cat();
 
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    Brain *getBrain() const;
    void makeSound() const;
};
