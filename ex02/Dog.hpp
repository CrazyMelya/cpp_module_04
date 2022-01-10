#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
	Brain *_brain;
public:
	Dog();
	~Dog();
	Dog(Dog const &other);
	void makeSound() const;

	Dog const &operator=(Dog const &other);

	Brain const *getBrain();
};

#endif
