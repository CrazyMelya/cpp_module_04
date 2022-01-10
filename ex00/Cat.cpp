#include "Cat.hpp"

Cat::Cat(/* args */)
{
	this->type = "Cat";
	std::cout << "Cat was created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat was delete" << std::endl;
}

Cat::Cat(Cat const &other)
{
	*this = other;
	std::cout << "Cat was created" << std::endl;
}

Cat const &Cat::operator=(Cat const &other)
{
	this->type = other.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}

