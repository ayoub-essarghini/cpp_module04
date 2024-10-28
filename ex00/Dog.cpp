#include "includes/Dog.hpp"

Dog::Dog(){
    type = "Dog";
}

Dog::Dog(const string& _type):Animal(_type)
{
    cout << "Dog Constructor args called" << endl;

}

void Dog::makeSound() const
{
    
    cout << "HawHaw" << endl;
}

Dog::Dog(const Dog& other)
{
    if (this != &other)
    {
        this->type = type;
    }
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

Dog::~Dog()
{
    cout << "Dog DeConstructor called" << endl;

}