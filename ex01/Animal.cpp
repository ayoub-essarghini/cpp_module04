#include "includes/Animal.hpp"

Animal::Animal()
{
    cout << "Default Constructor called" << endl;
}

Animal::Animal(const string& type):type(type)
{
    cout << "Constructor with args called" << endl;

}

void Animal::makeSound() const
{
    cout << "Default sound of animal" << endl;
}

Animal::~Animal()
{
    cout << "Destructor Animal called" << endl;

}
Animal::Animal(const Animal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
}
Animal& Animal::operator = (const Animal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
void Animal::setType(const string& type)  
{
    this->type = type;
}

string Animal::getType() const
{
    return type;
}

