#include "MateriaSource.hpp"

// CONSTRUCTORS/DESTRUCTORS //

MateriaSource::MateriaSource() : library{nullptr}
{
	// std::cout << "Default MateriaSource is constructed" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& other) : library{nullptr}
{
	// std::cout << "MateriaSource Copy constructor is called" << std::endl;
	for (int i = 1; i < LIB_SIZE; i++)
	{
		if (other.library[i])
			library[i] = other.library[i]->clone();
	}
}

MateriaSource::~MateriaSource()
{
	// std::cout << "MateriaSource is destructed" << std::endl;
	for (int i = 0; i < LIB_SIZE; i++)
	{
		if (library[i])
		{
			delete library[i];
			library[i] = nullptr;
		}
	}
}

// OPERATOR OVERLOADS //

MateriaSource& MateriaSource::operator=(MateriaSource const& other)
{
	// std::cout << "MateriaSource assignment operator is called" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < LIB_SIZE; i++)
		{
			if (library[i])
			{
				delete library[i];
				library[i] = nullptr;
			}
			if (other.library[i])
				library[i] = other.library[i]->clone();
		}
	}
	return *this;
}

// MEMBER FUNCTIONS //

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return;
	for (int i = 0; i < LIB_SIZE; i++)
	{
		if (!library[i])
		{
			library[i] = m;
			// std::cout << "Materia \"" << m->getType() << "\" is learned." << std::endl;
			return;
		}
	}
	std::cout << "Library is full. Materia \"" << m->getType() << "\" will be removed." << std::endl;
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < LIB_SIZE; i++)
	{
		if (library[i] && library[i]->getType() == type)
			return library[i]->clone();
	}
	return nullptr;
}
