#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog : public WrongAnimal
{
public:
	WrongDog();
	WrongDog(WrongDog const& otherDog);
	~WrongDog();

	WrongDog&	operator=(WrongDog const& otherDog);

	void	makeSound() const;
};

#endif