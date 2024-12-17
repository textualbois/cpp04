#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main( void )
{
	// Correct way

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	// Incorrect way using WrongAnimal
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongJ = new WrongDog();
	const WrongAnimal* wrongI = new WrongCat();

	std::cout << wrongJ->getType() << " " << std::endl;
	std::cout << wrongI->getType() << " " << std::endl;
	wrongI->makeSound();
	wrongJ->makeSound();
	wrongMeta->makeSound();

	delete wrongMeta;
	delete wrongJ;
	delete wrongI;


	return 0

;}
