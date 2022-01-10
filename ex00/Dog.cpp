#include "Dog.hpp"

Dog::Dog(/* args */)
{
	this->type = "Dog";
	std::cout << "Dog was created" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog was delete" << std::endl;
}

Dog::Dog(Dog const &other)
{
	*this = other;
	std::cout << "Dog was created" << std::endl;
}

Dog const &Dog::operator=(Dog const &other)
{
	this->type = other.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
