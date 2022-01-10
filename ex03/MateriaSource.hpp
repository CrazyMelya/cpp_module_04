#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria *_range[4];
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &other);

	MateriaSource const &operator=(MateriaSource const &other);

	void  learnMateria(AMateria *m);
	AMateria *createMateria(std::string const &type);
};

#endif
