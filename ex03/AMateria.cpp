#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const &other)
{
	*this = other;
}

AMateria::~AMateria()
{
}

AMateria const &AMateria::operator=(AMateria const &other)
{
	this->_type = other._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
