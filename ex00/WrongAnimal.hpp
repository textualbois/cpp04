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
	~WrongAnimal();

	WrongAnimal&	operator=(WrongAnimal const& otherAnimal);

	void	makeSound() const;
	std::string	getType() const;
};

#endif