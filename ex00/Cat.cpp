#include "Cat.hpp"

// CONSTRUCTORS/DESTRUCTORS //

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat is contructed" << std::endl;
}

Cat::Cat(Cat const& otherCat) : Animal(otherCat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = otherCat;
}

Cat::~Cat()
{
	std::cout << type << " is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

Cat&	Cat::operator=(Cat const& otherCat)
{
	std::cout << "Cat assignment operator overload called" << std::endl;
	if (this != &otherCat)
	{
		type = otherCat.type;
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}