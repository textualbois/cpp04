#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(Dog const& otherDog);
	virtual ~Dog();

	Dog&	operator=(Dog const& otherDog);

	virtual void	makeSound() const;
};

#endif