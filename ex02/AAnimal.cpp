#include "includes/AAnimal.hpp"

AAnimal::AAnimal()
{
    cout << "Default Constructor called" << endl;
}

void AAnimal::makeSound() const
{
    cout << "Default sound of AAnimal" << endl;
}

AAnimal::~AAnimal()
{
    cout << "Destructor AAnimal called" << endl;

}
AAnimal::AAnimal(const AAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
}
AAnimal& AAnimal::operator = (const AAnimal& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}
void AAnimal::setType(const string& type)  
{
    this->type = type;
}

string AAnimal::getType() const
{
    return type;
}

