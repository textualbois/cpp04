#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(std::string const& type);
	Animal(Animal const& otherAnimal);
	virtual ~Animal();

	Animal&	operator=(Animal const& otherAnimal);

	virtual void	makeSound() const;
	std::string	getType() const;
};

#endif