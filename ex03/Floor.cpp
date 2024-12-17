#include "Floor.hpp"

Floor* Floor::instance = nullptr;

Floor::Floor() : materiaArray(nullptr), capacity(0), length(0) {}

Floor::~Floor() {
	cleanUp();
}

Floor& Floor::getInstance() {
	if (instance == nullptr) {
		instance = new Floor();
	}
	return *instance;
}

void Floor::destroyInstance() {
	std::cout << "Destroying Floor instance" << std::endl;
	delete instance;
	instance = nullptr;
}

void Floor::dropMateria(AMateria* m) {
	if (m != nullptr) {
		if (length == capacity) {
			resize();
		}
		materiaArray[length++] = m;
		std::cout << "Materia " << m->getType() << " dropped on the floor" << std::endl;
	}
}

void Floor::cleanUp() {
	std::cout << "Cleaning up floor" << std::endl;
	delete[] materiaArray;
	materiaArray = nullptr;
	length = 0;
	capacity = 0;
}

void Floor::resize() {
	int newCapacity = (capacity == 0) ? 4 : capacity * 2; // Initial size of 4 and doubles
	AMateria** newArray = new AMateria*[newCapacity];
	for (int i = 0; i < length; i++) {
		newArray[i] = materiaArray[i];
	}
	delete[] materiaArray;
	materiaArray = newArray;
	capacity = newCapacity;
}