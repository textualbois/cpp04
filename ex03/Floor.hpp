#ifndef FLOOR_HPP
#define FLOOR_HPP

#include <iostream>
#include "AMateria.hpp"

class Floor {
private:
	AMateria** materiaArray; // Pointer to array of AMateria pointers
	int capacity;            // Maximum number of materia that can be stored
	int length;              // Current number of materia stored

	void resize();           // Private function to resize array

	// Prevent copy constructor and assignment
	Floor(const Floor&) = delete;
	Floor& operator=(const Floor&) = delete;

	// Singleton static instance
	static Floor* instance;

	// Private constructor and destructor
	Floor();
	~Floor();

public:
	static Floor& getInstance();
	static void destroyInstance();

	void dropMateria(AMateria* m); // Drop materia onto the floor
	void cleanUp();                // Clean up all dropped materia
};

#endif // FLOOR_HPP