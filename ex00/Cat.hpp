#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"

class Cat: public Animal
{
private:

public:
	Cat(/* args */);
	~Cat();
	Cat(Cat const &other);
	void makeSound() const;

	Cat const &operator=(Cat const &other);

};

#endif
