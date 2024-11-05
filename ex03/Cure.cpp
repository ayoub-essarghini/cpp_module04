#include "includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    cout << "Cure constructor called" << "\n";
}

Cure::Cure(const Cure &other)
{
    *this = other;
}
Cure &Cure::operator=(const Cure &other)
{
    return *this;
}

Cure *Cure::clone() const
{
    return new Cure(*this);
}
