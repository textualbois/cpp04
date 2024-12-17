#include "Character.hpp"

// CONSTRUCTORS/DESTRUCTORS //

Character::Character(std::string const& name) : name(name), inventory{nullptr}
{
	// std::cout << name << " Character is constructed" << std::endl;
}

Character::Character(Character const& otherCharacter) : name(otherCharacter.name), inventory{nullptr}
{
	// std::cout << "Copy constructor is called" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (otherCharacter.inventory[i])
			inventory[i] = otherCharacter.inventory[i]->clone();
		else
			inventory[i] = nullptr;
	}
}

Character::~Character()
{
	// std::cout << name << " is destructed" << std::endl;
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = nullptr;
		}
	}
}

// OPERATOR OVERLOADS //

Character&	Character::operator=(Character const & otherCharacter)
{
	// std::cout << "Character assignment operator is called" << std::endl;
	if (this != &otherCharacter)
	{
		name = otherCharacter.getName();
		for (int i = 0; i < INV_SIZE; i++)
		{
			if (inventory[i])
			{
				delete inventory[i];
				inventory[i] = nullptr;
			}
			if (otherCharacter.inventory[i])
				inventory[i] = otherCharacter.inventory[i]->clone();
		}
	}
	return *this;
}

// MEMBER FUNCTIONS //

std::string const & Character::getName() const
{
	// std::cout << "Character getName is called" << std::endl;
	return name;
}

void Character::equip(AMateria* m)
{
	// std::cout << "Character equip is called" << std::endl;
	if (!m)
	{
		std::cout << "AMateria is NULL" << std::endl;
		return ;
	}
	for (int i = 0; i < INV_SIZE; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << "AMateria " << m->getType() << " is equipped in slot " << i << std::endl;
			return ;
		}
		if (inventory[i] == m)
		{
			std::cout << "AMateria " << m->getType() << " is already equipped in slot " << i << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
	// std::cout << "Character unequip is called" << std::endl;
	if (idx >= 0 && idx < INV_SIZE)
	{
		if (!inventory[idx])
		{
			std::cout << "Inventory slot " << idx << " is empty" << std::endl;
		}
		else
		{
			std::cout << "AMateria " << inventory[idx]->getType() << " is unequiped from slot " << idx << std::endl;
			inventory[idx] = nullptr;
		}
	}
}

void Character::use(int idx, ICharacter& target)
{
	// std::cout << "Character use is called" << std::endl;
	if (idx >= 0 && idx < INV_SIZE && inventory[idx])
		inventory[idx]->use(target);
}
