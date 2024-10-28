#pragma once

#include <iostream>
using std::cout;
using std::endl;
using std::string;

class Animal
{
protected:
    string type;

public:
    Animal();
    Animal(const string &_type);
    Animal(const Animal &other);
    Animal& operator=(const Animal& other);
    ~Animal();
    void setType(const string &type);
    string getType() const;
    virtual void makeSound() const;
};
