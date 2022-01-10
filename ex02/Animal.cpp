#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Animal";
	std::cout << "Animal was created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal was delete" << std::endl;
}

Animal::Animal(Animal const &other)
{
	*this = other;
	std::cout << "Animal was created" << std::endl;
}

Animal const &Animal::operator=(Animal const &other)
{
	this->type = other.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}
