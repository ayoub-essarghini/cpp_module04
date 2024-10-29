#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const string& _type);
    Dog(const Dog& other);
    Dog& operator = (const Dog& other);
    Brain* getBrain() const;
    ~Dog();
    void makeSound() const;
};