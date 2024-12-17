#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

#define INV_SIZE 4

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria* inventory[INV_SIZE];
		// std::list<AMateria>* unequiped;

	public:
		Character(std::string const & name);
		Character(Character const & otherCharacter);
		~Character();

		Character& operator=(Character const& otherCharacter);

		std::string const& getName() const;

		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif // CHARACTER_HPP