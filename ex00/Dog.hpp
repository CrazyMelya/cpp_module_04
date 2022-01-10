#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Dog: public Animal
{
private:
	/* data */
public:
	Dog(/* args */);
	~Dog();
	Dog(Dog const &other);
	void makeSound() const;

	Dog const &operator=(Dog const &other);
};

#endif
