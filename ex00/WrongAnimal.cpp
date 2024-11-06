#include "includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    cout << "Default Constructor called" << endl;
}

WrongAnimal::WrongAnimal(const string& type):type(type)
{
    cout << "Constructor with args called" << endl;

}

void WrongAnimal::makeSound() const
{
    cout << "Default sound of WrongAnimal" << endl;
}

WrongAnimal::~WrongAnimal()
{
    cout << "Destructor WrongAnimal called" << endl;

}
WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
}
WrongAnimal& WrongAnimal::operator = (const WrongAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
void WrongAnimal::setType(const string& type)  
{
    this->type = type;
}

string WrongAnimal::getType() const
{
    return type;
}

