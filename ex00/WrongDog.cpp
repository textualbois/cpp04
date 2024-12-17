#include "WrongDog.hpp"

// CONSTRUCTORS/DESTRUCTORS //

WrongDog::WrongDog() : WrongAnimal("WrongDog")
{
	std::cout << "WrongDog is contructed" << std::endl;
}

WrongDog::WrongDog(WrongDog const& otherDog) : WrongAnimal(otherDog)
{
	std::cout << "WrongDog copy constructor called" << std::endl;
	*this = otherDog;
}

WrongDog::~WrongDog()
{
	std::cout << type << " type WrongAnimal is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

WrongDog&	WrongDog::operator=(WrongDog const& otherDog)
{
	std::cout << "WrongDog assignment operator overload called" << std::endl;
	if (this != &otherDog)
	{
		type = otherDog.type;
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	WrongDog::makeSound() const
{
	std::cout << "awoooo" << std::endl;
}