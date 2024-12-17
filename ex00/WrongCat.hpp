#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(WrongCat const& otherCat);
	~WrongCat();

	WrongCat&	operator=(WrongCat const& otherCat);

	void	makeSound() const;
};

#endif