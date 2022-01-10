#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "WrongAnimal";
    std::cout << "WrongAnimal was created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal was deleted" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &other )
{
    *this = other;
	std::cout << "WrongAnimal was created" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "Make some NOISE!" << std::endl;
}

WrongAnimal const	&WrongAnimal::operator=(WrongAnimal const &other)
{
	type = other.getType();
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}