#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

using std::cout;
using std::endl;

class Cat : public Animal
{
private:
    Brain *brain;

public:
    Cat();
    Cat(const string &_type);
    Cat(const Cat &other);
    Cat &operator=(const Cat &other);
    ~Cat();
    Brain *getBrain() const;
    void makeSound() const;
};
