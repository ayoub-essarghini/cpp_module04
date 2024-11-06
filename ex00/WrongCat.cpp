#include "includes/WrongCat.hpp"

WrongCat::WrongCat(){
    type = "WrongCat";
}

WrongCat::WrongCat(const string& _type):WrongAnimal(_type)
{
    cout << "WrongCat Constructor args called" << endl;

}

void WrongCat::makeSound() const
{
    cout << "Wrong animal sound" << endl;
}

WrongCat::WrongCat(const WrongCat& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
}
WrongCat& WrongCat::operator=(const WrongCat& other)
{
    if (this != &other)
    {
        this->type = type;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    cout << "Cat Destructor called" << endl;

}