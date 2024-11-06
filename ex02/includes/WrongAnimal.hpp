#pragma once

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
protected:
    string type;

public:
    WrongAnimal();
    WrongAnimal(const string &_type);
    WrongAnimal(const WrongAnimal &other);
    WrongAnimal& operator=(const WrongAnimal& other);
    virtual ~WrongAnimal();
    void setType(const string &type);
    string getType() const;
    virtual void makeSound() const;
};
