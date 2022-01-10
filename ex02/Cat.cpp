#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	_brain = new Brain;
	std::cout << "Cat was created" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat was delete" << std::endl;
}

Cat::Cat(Cat const &other)
{
	*this = other;
	std::cout << "Cat was created" << std::endl;
}

Cat const &Cat::operator=(Cat const &other)
{
	if (other._brain)
		_brain = new Brain(*other._brain);
	this->type = other.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

