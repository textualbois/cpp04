#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>

#define CAPACITY 100

class Brain {
	private:
		std::string	ideas[CAPACITY];
		size_t	index;

	public:
		Brain();
		Brain(const Brain& otherBrain);
		~Brain();
		Brain& operator=(const Brain& otherBrain);

		bool AddIdea(const std::string& idea);
		void PrintIdeas() const;
		void PacoC(size_t i = 0);
};

#endif // BRAIN_HPP