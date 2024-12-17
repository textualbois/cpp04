#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain* brain;

	public:
		Dog();
		Dog(Dog const& otherDog);
		virtual ~Dog();

		Dog&	operator=(Dog const& otherDog);

		virtual void	makeSound() const;
		void AddIdea(const std::string& idea);
		void PrintIdeas() const;
		void PacoC(size_t i = 0);
};

#endif