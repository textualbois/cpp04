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
	const Dog* k = static_cast<const Dog*>(j);
	const Animal* meta2 = new Animal(*meta);
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << k->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	k->makeSound();
	meta->makeSound();
	meta2->makeSound();

	delete meta;
	delete j;
	delete i;
	delete meta2;

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
