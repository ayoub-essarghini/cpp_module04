#pragma once
#include <iostream>
using std::cout;
using std::string;
class AMateria
{
protected:
    string type;

public:
    AMateria();
    AMateria(string const &type);
    AMateria(const AMateria &other);
    AMateria &operator=(const AMateria &other);
    string const &getType() const;
    ~AMateria();
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};
