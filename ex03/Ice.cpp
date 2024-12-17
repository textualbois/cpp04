#include "Ice.hpp"

// CONSTRUCTORS/DESTRUCTORS //

Ice::Ice() : AMateria("ice")
{
	// std::cout << "Ice default constructor is called" << std::endl;
}

Ice::Ice(Ice const& otherIce) : AMateria(otherIce)
{
	// std::cout << "Ice copy constructor is called" << std::endl;
}

Ice::~Ice()
{
	// std::cout << "Ice destructor is called" << std::endl;
}

// OPERATOR OVERLOADS //

Ice&	Ice::operator=(Ice const& otherIce)
{
	// std::cout << "Ice assignment operator is called" << std::endl;
	if (this != &otherIce)
	{
		AMateria::operator=(otherIce);
	}
	return *this;
}

// MEMBER FUNCTIONS //

AMateria* Ice::clone() const
{
	// std::cout << "Ice clone is called" << std::endl;
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout <<"* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
