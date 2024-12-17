#include "Cure.hpp"

// CONSTRUCTORS/DESTRUCTORS //

Cure::Cure() : AMateria("cure")
{
	// std::cout << "Cure default constructor is called" << std::endl;
}

Cure::Cure(Cure const& otherCure) : AMateria(otherCure)
{
	// std::cout << "Cure copy constructor is called" << std::endl;
}

Cure::~Cure()
{
	// std::cout << "Cure destructor is called" << std::endl;
}

// OPERATOR OVERLOADS //

Cure&	Cure::operator=(Cure const& otherCure)
{
	// std::cout << "Cure assignment operator is called" << std::endl;
	if (this != &otherCure)
	{
		AMateria::operator=(otherCure);
	}
	return *this;
}

// MEMBER FUNCTIONS //

AMateria* Cure::clone() const
{
	// std::cout << "Cure clone is called" << std::endl;
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
