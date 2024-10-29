#include "includes/Cat.hpp"

Cat::Cat(){
    type = "Cat";
}

Cat::Cat(const string& _type):Animal(_type)
{
    cout << "Cat Constructor args called" << endl;

}

void Cat::makeSound() const
{
    cout << "Miaaaaw" << endl;
}

Cat::Cat(const Cat& other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
}
Cat& Cat::operator=(const Cat& other)
{
    if (this != &other)
    {
        this->type = type;
    }
    return *this;
}

Cat::~Cat()
{
    cout << "Cat Destructor called" << endl;

}