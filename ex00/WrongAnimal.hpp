#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string const& type);
	WrongAnimal(WrongAnimal const& otherAnimal);
	virtual ~WrongAnimal();

	WrongAnimal&	operator=(WrongAnimal const& otherAnimal);

	virtual void	makeSound() const;
	std::string	getType() const;
};

#endif