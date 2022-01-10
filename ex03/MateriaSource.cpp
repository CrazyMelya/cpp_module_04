#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_range[i] = nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (this->_range[i])
			delete this->_range[i];
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	*this = other;
}

MateriaSource const &MateriaSource::operator=(MateriaSource const &other)
{
	for (int i = 0; i < 4; i++)
		this->_range[i] = other._range[i]->clone();
	return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
	int i;

	i = 0;
	while (this->_range[i] && i < 4)
		i++;
	this->_range[i] = m;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4 && this->_range[i]; i++)
		if (this->_range[i]->getType().compare(type))
			return (this->_range[i]->clone());
	return (nullptr);
}
