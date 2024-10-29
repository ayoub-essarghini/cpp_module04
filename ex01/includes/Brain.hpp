#pragma once
#include <iostream>
#include "Animal.hpp"

class Brain
{
public:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain &other);
	Brain &operator=(const Brain &other);
    ~Brain();
    
};