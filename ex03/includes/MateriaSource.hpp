#pragma once
#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _materias[4];

public:
    MateriaSource();
    virtual ~MateriaSource();
    MateriaSource(MateriaSource const & src);
    MateriaSource & operator=(MateriaSource const & rhs);

    void learnMateria(AMateria* m);
    AMateria* createMateria(std::string const & type);
};

#endif
