#include "Brain.hpp"
#include <iostream>

// CONSTRUCTORS/DESTRUCTORS //

Brain::Brain() : index(0)
{
	std::cout << "Brain constructed" << std::endl;
}

Brain::Brain(const Brain& otherBrain)
{
	*this = otherBrain;
	std::cout << "Brain copy constructed" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destroyed" << std::endl;
}

// OPERATOR OVERLOADS //

Brain& Brain::operator=(const Brain& otherBrain) {
	std::cout << "Brain assignment operator called\n";
	if (this != &otherBrain)
	{
		index = otherBrain.index;
		for (size_t i = 0; i < otherBrain.index; i++) 
			this->ideas[i] = otherBrain.ideas[i];
		PacoC(otherBrain.index);
	}
	return *this;
}

// MEMBER FUNCTIONS //

bool Brain::AddIdea(const std::string& idea)
{
	if (idea.empty())
	{
		std::cout << "Cant think of nothing" << std::endl;
		return false;
	}
	if (index < CAPACITY)
	{
		ideas[index] = idea;
		index++;
		return true;
	}
	return false;
}

void Brain::PrintIdeas() const
{
	for (size_t i = 0; i < index; i++)
	{
		std::cout << "idea #" << i << ": " << ideas[i] << std::endl;
	}
}

void Brain::PacoC(size_t i)
{
	if (i >= CAPACITY)
	{
		std::cout << "Paco -c capacity out of bound. Are you trying to segfault?" << std::endl;
	} else {
		std::cout << "Paco -c on brain called with i = " << i << std::endl;
		for (size_t j = i; j < CAPACITY; j++)
		{
			ideas[j].clear();
		}
	}
}