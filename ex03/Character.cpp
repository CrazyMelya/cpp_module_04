#include "Character.hpp"

Character::Character()
{
	this->_name = "Noname";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(std::string name)
{
	this->_name = name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = nullptr;
}

Character::Character(Character const &other)
{
	*this = other;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (this->_inventory[i])
			delete this->_inventory[i];
}

Character const &Character::operator=(Character const &other)
{
	this->_name = other._name;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = other._inventory[i];
	return (*this);
}

std::string const &Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria *m)
{
	int i;

	i = 0;
	while (this->_inventory[i] && i < 4)
		i++;
	this->_inventory[i] = m;
}

void Character::unequip(int idx)
{
	if (idx > -1 && idx < 4)
		this->_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx > -1 && idx < 4 && this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
