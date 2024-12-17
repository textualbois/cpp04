#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const& otherIce);
		~Ice();

		Ice& operator=(Ice const& otherIce);

		AMateria* clone() const;
		void use(ICharacter& target);
};

#endif