#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const string& _type);
    Dog(const Dog& other);
    Dog& operator = (const Dog& other);
    ~Dog();
    void makeSound() const;
};