#pragma once
#include <iostream>
using std::cout;
using std::endl;
using std::string;

class AAnimal
{
protected:
    string type;

public:
    AAnimal();
	AAnimal(const AAnimal &other);
	AAnimal &operator=(const AAnimal &other);
    virtual ~AAnimal();
    void setType(const string &type);
    string getType() const;
    virtual void	makeSound() const = 0;
};
