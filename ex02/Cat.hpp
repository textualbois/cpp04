#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain* brain;

	public:
		Cat();
		Cat(Cat const& otherCat);
		virtual ~Cat();

		Cat&	operator=(Cat const& otherCat);

		virtual void	makeSound() const;
		void AddIdea(const std::string& idea);
		void PrintIdeas() const;
		void PacoC(size_t i = 0);
};

#endif