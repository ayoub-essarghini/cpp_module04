#include "./includes/AMateria.hpp"


AMateria::AMateria():type("default")
{
    cout << "Amateria default Constructor called" << "\n";

}
AMateria::AMateria(string const &type):type(type)
{
    cout << "Amateria Parametrized Constructor called" << "\n";
}

AMateria::AMateria(const AMateria& other)
{
    *this = other;
}
AMateria& AMateria::operator=(const AMateria& other)
{
    if (this != &other)
    {
        this->type = other.getType();
    }
    return *this;
}

string const &AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter &target)
{
    
}

AMateria::~AMateria()
{
    cout << "Amateria Destructor called"<<"\n";
}