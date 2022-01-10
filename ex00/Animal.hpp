#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <iomanip>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(Animal const &other);
	Animal const &operator=(Animal const &other);
	void virtual makeSound() const;
	std::string getType() const;
};

#endif
