#include "WrongCat.hpp"

// CONSTRUCTORS/DESTRUCTORS //

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat is contructed" << std::endl;
}

WrongCat::WrongCat(WrongCat const& otherCat) : WrongAnimal(otherCat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = otherCat;
}

WrongCat::~WrongCat()
{
	std::cout << type << " type WrongAnimal is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

WrongCat&	WrongCat::operator=(WrongCat const& otherCat)
{
	std::cout << "WrongCat assignment operator overload called" << std::endl;
	if (this != &otherCat)
	{
		type = otherCat.type;
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	WrongCat::makeSound() const
{
	std::cout << "shhhhhh..." << std::endl;
}