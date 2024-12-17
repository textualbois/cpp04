#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const& otherCure);
		~Cure();

		Cure& operator=(Cure const& otherCure);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif