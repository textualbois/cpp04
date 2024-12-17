#include "Dog.hpp"

// CONSTRUCTORS/DESTRUCTORS //

Dog::Dog() : Animal("Dog")
{
	std::cout << "Dog is contructed" << std::endl;
}

Dog::Dog(Dog const& otherDog) : Animal(otherDog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = otherDog;
}

Dog::~Dog()
{
	std::cout << type << " is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

Dog&	Dog::operator=(Dog const& otherDog)
{
	std::cout << "Dog assignment operator overload called" << std::endl;
	if (this != &otherDog)
	{
		type = otherDog.type;
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	Dog::makeSound() const
{
	std::cout << "Wuf" << std::endl;
}