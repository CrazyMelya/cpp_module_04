#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include <iomanip>
#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
private:

public:
	WrongCat( void );
	~WrongCat( void );
	WrongCat( WrongCat const &other );

	WrongCat	const &operator=( WrongCat const &other );

	void	makeSound( void ) const;
};

#endif