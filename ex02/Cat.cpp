#include "Cat.hpp"

// CONSTRUCTORS/DESTRUCTORS //

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << "Cat is contructed" << std::endl;
}

Cat::Cat(Cat const& otherCat) : Animal(otherCat), brain(new Brain(*otherCat.brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << type << " is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

Cat&	Cat::operator=(Cat const& otherCat)
{
	std::cout << "Cat assignment operator overload called" << std::endl;
	if (this != &otherCat)
	{
		type = otherCat.type;
		delete brain;
		brain = new Brain(*otherCat.brain);
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

void Cat::AddIdea(const std::string& idea)
{
	if (!brain->AddIdea(idea))
		std::cout << "Cat Brain full. Do Paco -c" << std::endl;
}

void Cat::PrintIdeas() const
{
	brain->PrintIdeas();
}

void Cat::PacoC(size_t i)
{
	brain->PacoC(i);
}