#include "Dog.hpp"

// CONSTRUCTORS/DESTRUCTORS //

Dog::Dog() : Animal("Dog"), brain(new Brain())
{
	std::cout << "Dog is contructed" << std::endl;
}

Dog::Dog(Dog const& otherDog) : Animal(otherDog), brain(new Brain(*otherDog.brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " is destructed" << std::endl;
}

// OPERATOR OVERLOADS //

Dog&	Dog::operator=(Dog const& otherDog)
{
	std::cout << "Dog assignment operator overload called" << std::endl;
	if (this != &otherDog)
	{
		type = otherDog.type;
		delete brain;
		brain = new Brain(*otherDog.brain);
	}
	return *this;
}

// MEMBER FUNCTIONS //

void	Dog::makeSound() const
{
	std::cout << "Wuf" << std::endl;
}

void Dog::AddIdea(const std::string& idea)
{
	if (!brain->AddIdea(idea))
		std::cout << "Dog Brain full. Do Paco -c" << std::endl;
}

void Dog::PrintIdeas() const
{
	brain->PrintIdeas();
}

void Dog::PacoC(size_t i)
{
	brain->PacoC(i);
}