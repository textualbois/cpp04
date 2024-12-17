#include "WrongAnimal.hpp"

// CONSTRUCTORS/DESTRUCTORS //

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Default WrongAnimal" << " is contructed" << std::endl;
}

WrongAnimal::WrongAnimal(std::string const& type) : type(type)
{
	std::cout << type << " WrongAnimal is contructed" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const& otherAnimal)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = otherAnimal;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << type << " type WrongAnimal is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& otherAnimal)
{
	std::cout << "WrongAnimal assignment operator overload called" << std::endl;
	if (this != &otherAnimal)
	{
		type = otherAnimal.type;
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const 
{
	return type;
}