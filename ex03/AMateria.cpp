#include "AMateria.hpp"

// CONSTRUCTORS/DESTRUCTORS //

AMateria::AMateria() : type("default")
{
	// std::cout << "AMateria default constructor is called" << std::endl;
}

AMateria::AMateria(std::string const& type) : type(type)
{
	// std::cout << "AMateria string constructor is called with " << type << std::endl;
}

AMateria::AMateria(AMateria const& otherAMateria) : type(otherAMateria.type)
{
	// std::cout << "AMateria copy constructor is called" << std::endl;
}

AMateria::~AMateria()
{
	// std::cout << "AMateria destructor is called" << std::endl;
}

/// OPERATOR OVERLOADS ///

AMateria&	AMateria::operator=(AMateria const& otherAMateria)
{
	if (this != &otherAMateria)
	{
		type = otherAMateria.type;
	}
	return *this;
}

// MEMBER FUNCTIONS //

std::string const& AMateria::getType() const
{
	// std::cout << "AMateria getType is called" << std::endl;
	return type;
}

