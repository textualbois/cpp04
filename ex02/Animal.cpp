#include "Animal.hpp"

// CONSTRUCTORS/DESCTRUCTORS //

Animal::Animal() : type("Animal")
{
	std::cout << "Default Animal" << " is contructed" << std::endl;
}

Animal::Animal(std::string const& type) : type(type)
{
	std::cout << type << " Animal is contructed" << std::endl;
}

Animal::Animal(Animal const& otherAnimal)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = otherAnimal;
}

Animal::~Animal()
{
	std::cout << type << " type Animal is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

Animal&	Animal::operator=(Animal const& otherAnimal)
{
	std::cout << "Animal assignment operator overload called" << std::endl;
	if (this != &otherAnimal)
	{
		type = otherAnimal.type;
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	Animal::makeSound() const
{
	std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const 
{
	return type;
}
