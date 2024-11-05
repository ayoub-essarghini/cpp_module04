#include "includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
    cout << "Ice constructor called" << "\n";
}

Ice::Ice(const Ice &other)
{
    *this = other;
}
Ice &Ice::operator=(const Ice &other)
{
    return *this;
}

Ice *Ice::clone() const
{
    return new Ice(*this);
}
