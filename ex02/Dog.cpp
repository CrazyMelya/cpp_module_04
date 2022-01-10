#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	_brain = new Brain;
	std::cout << "Dog was created" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog was delete" << std::endl;
}

Dog::Dog(Dog const &other)
{
	*this = other;
	std::cout << "Dog was created" << std::endl;
}

Dog const &Dog::operator=(Dog const &other)
{
	// this->_brain = other._brain;
	if (other._brain)
		_brain = new Brain(*other._brain);
	this->type = other.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain const *Dog::getBrain()
{
	return (this->_brain);
}
