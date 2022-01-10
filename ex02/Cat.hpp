#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <iomanip>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain *_brain;
public:
	Cat();
	~Cat();
	Cat(Cat const &other);
	void makeSound() const;

	Cat const &operator=(Cat const &other);

	Brain const *getBrain();
};

#endif
