#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

#define LIB_SIZE 4

class MateriaSource : public IMateriaSource
{
	private:
		AMateria*	library[LIB_SIZE];

	public:
		MateriaSource();
		// MateriaSource(AMateria* m);
		MateriaSource(MateriaSource const& other);
		~MateriaSource();

		MateriaSource& operator=(MateriaSource const& other);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const& type);
};

#endif